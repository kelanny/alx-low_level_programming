#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - This function convert string to an integer
 * @s: input string to be converted
 *
 * Return: Integer converted
 */
int _atoi(char *s)
{
	int a, b, c, d, e, digit = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	while (b < a && e == 0)
	{
		if (s[b] == '-')
			++c;
		if (s[b] >= '0' && s[b] <= '9')
		{
			digit = s[b] - '0';
			if (d % 2)
				digit = -digit;
			d = d * 10 + digit;
			e = 1;
			if (s[b + 1] < '0' || s[b + 1] > '9')
				break;
			e = 0;
		}
		b++;
	}
	if (e == 0)
		return (0);
	return (d);
}

/**
 * main - This function takes input variables multiplies and return an integer
 * @argc: input variable for argument count
 * @argv: input variable for argument array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x = 0, y = 0;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
