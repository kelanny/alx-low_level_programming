#include <stdio.h>
#include <unistd.h>
/**
 * main - prints "and that place of art is useful" - Dora korpar, 2015-10-19,
 * followed by a newline directed to standard error.
 * Return: Always 1 (Sucess)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
