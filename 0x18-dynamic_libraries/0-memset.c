#include "main.h"

/**
 * _memset - Fills memory with a constant bytes
 * @s: An array of type char
 * @b: Byte to fill the memory with
 * @n: No of elements to occupy in s
 *
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int len = 0;
	unsigned int i;

	while (s[len] != '\0')
		len++;
	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
