#include <stdio.h>
/**
 * main - This program prints digits on the screen starting with 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
