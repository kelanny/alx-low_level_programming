#include "main.h"
/**
 * _abs - compute the absolute value of a number
 * @n: the number to be computed
 * Return: Absolute value of number n or zero
 */
int _abs(int n)
{
	if (n < 0)
	{
	int abs_value;

	abs_value = n * -1;
	return (abs_value);
	}
	return (n);
}

