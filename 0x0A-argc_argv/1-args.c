#include <stdio.h>
#include "main.h"

/**
 * main - The function print the number of arguments passed to the program
 * @argc: Input variable for number of arguments
 * @argv: Input array variable of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
