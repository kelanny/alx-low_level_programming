#include <stdio.h>
#include "main.h"

/**
 * main - The function prints all arguments it receives
 * @argc: Input variable with number of arguments passed
 * @argv: Input variable array containing arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
