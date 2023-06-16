#include "main.h"

/**
 * _pow_recursion - returns value of a integer raised to a power of an int.
 * @x: The integer to raise
 * @y: The power to raise to
 *
 * Return: Value of the raised integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
