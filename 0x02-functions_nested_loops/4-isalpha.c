#include "main.h"
/**
 * _isalpha - This program returns 1 if c is alpha or zero otherwise.
 *
 * @c: Is an alphabet
 * Return: 1 if alpha zero otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
	_putchar('\n');
}
