#include "main.h"
/**
 * _islower - This program checks user a character
 * if its in lowercase, it returns 1 else it returns 0
 *
 * @c: The character is ASCII code
 *
 * Return: 1 for lowercase characters. 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
	_putchar('\n');
}
