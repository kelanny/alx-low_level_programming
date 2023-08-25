#include "main.h"

/**
 * *_memcpy - Copies bytes from one memory area to another
 * @dest: A pointer to destination memory area
 * @src: A pointer to the src memory area to copy
 * @n: No of bytes to copy.
 *
 * Return: A pointer to the dest array.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
