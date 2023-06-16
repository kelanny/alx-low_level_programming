#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int is_digit(char *s);
int _strlen(char *s);
void errors(void);

/**
 * is_digit - This function checks if all characters in a string are digits
 * @s: A string of characters to be checked
 *
 * Return: If digit 1, otherwise 0
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - The function returns the length of the input string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * errors - This function handles errors
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - This function multiplies two positive digits
 * @argc: Number of commandline arguments
 * @argv: Array of commandline arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int s1_len, s2_len, len, i, tmp, dig1, dig2, x = 0;
	int *result;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
	{
		errors();
	}
	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	len = s1_len + s2_len + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= s1_len + s2_len; i++)
		result[i] = 0;
	for (s1_len = s1_len - 1; s1_len >= 0; s1_len--)
	{
		dig1 = s1[s1_len] - '0';
		tmp = 0;
		for (s2_len = _strlen(s2) - 1; s2_len >= 0; s2_len--)
		{
			dig2 = s2[s2_len] - '0';
			tmp += result[s1_len + s2_len + 1] + (dig1 * dig2);
			result[s1_len + s2_len + 1] = tmp % 10;
			tmp /= 10;
		}
		if (tmp > 0)
			result[s1_len + s2_len + 1] += tmp;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			x = 1;
		if (x)
			_putchar(result[i] + '0');
	}
	if (!x)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
