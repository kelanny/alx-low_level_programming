#include <stdio.h>

void print_before_main(void)__attribute__((constructor));
/**
 * print_before_main - Prints a string before the main function execute.
 *
 * Return: Nothing
 */

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
