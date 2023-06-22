#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - This function print strings passed as arguments.
 * @separator: A string that separate the printed strings
 * @n: Number of strings passed as arguments
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
