#include "main.h"

/**
 * _strcpy - Copies a string src including terminating null byte(\0).
 * @dest: Pointer to the destination memory space.
 * @src: Pointer to the source string to copy.
 *
 * Return: A pointer to dest string.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
