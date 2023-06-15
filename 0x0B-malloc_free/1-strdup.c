#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - The function duplicate string to a new memory space
 * @str: Input string to duplicate
 *
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	char *xy;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	xy = malloc(sizeof(char) * (i + 1));
	if  (xy == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
	{
		xy[j] = str[j];
	}
	return (xy);
}
