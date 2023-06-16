#include "main.h"

/**
 * _strlen_recursion - This function returns the length of an input string
 * @s: The input string variable
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
