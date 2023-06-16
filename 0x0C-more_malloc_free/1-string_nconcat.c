#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Function concatenates n bytes of strings to another string
 * @s1: Input string to concatenate to
 * @s2: Input string to concatenate.
 * @n: Number of bytes to concatenate
 *
 * Return: A Pointer to the newly concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int s1_len = 0, s2_len = 0, x = 0, y = 0;

	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}
	if (n < s2_len)
		s = malloc(sizeof(char) * (s1_len + n + 1));
	else
		s = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!s)
		return (NULL);

	while (x < s1_len)
	{
		s[x] = s1[x];
		x++;
	}
	while (n < s2_len && x < (s1_len + n))
	{
		s[x++] = s2[y++];
	}
	while (n >= s2_len && x < (s1_len + s2_len))
	{
		s[x++] = s2[y++];
	}
	s[x] = '\0';
	return (s);
}
