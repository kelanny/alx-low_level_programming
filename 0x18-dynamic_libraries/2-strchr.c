#include "main.h"
#include <stdlib.h>

/**
 * _strchr - It locates a character in a string.
 * @s: Array of input string to search
 * @c: A character to find.
 *
 * Return: A pointer to address of c in string s if found, NULL otherwise
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
