#include "main.h"

/**
 * _isupper - Checks if a character is in uppercase.
 * @c: The character to check.
 *
 * Return: 1 if upper, otherwise 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return  (1);
	else
		return (0);
}
