#include <stdio.h>
/**
 * main - This program prints alphabets in reverse order
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
