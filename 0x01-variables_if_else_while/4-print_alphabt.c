#include <stdio.h>
/**
 * main - prints alphabets on screen but without letters q and e
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
