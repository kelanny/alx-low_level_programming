#include "variadic_functions.h"

/**
 * sum_them_all - Returns the functions of all its parameters
 * @n: Number of the arguments the function allow.
 *
 * Return: 0 if n is 0 else returns the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;
	int num;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);
	return (sum);
}
