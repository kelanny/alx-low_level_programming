#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - The function prints anything
 * @format: list of types of arguments passed
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	const char *str;
	char c, *separator = ", ";


	va_start(args, format);
	if (format)
	{
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, c = va_arg(args, int));
				break;
			case 'i':
				printf("%s%d",separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	}
	va_end(args);
	printf("\n");
}
