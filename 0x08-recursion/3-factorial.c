#include "main.h"

/**
 * factorial - The function return the fuctorial of a given integer
 * @n: The integer to factorize
 *
 * Return: Factorial, 1 if n is 0 and -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
