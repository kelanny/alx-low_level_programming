#include <stdio.h>

/**
 * main - Prints the sum of EVEN fibonacci sequence
 * less than 4000000
 *
 * Return: nothing
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
	printf("J%d/n");
	k += j;
	if (k % 2 == 0)
	sum += k;
	j = k - j;
	++i;
	}
	printf("%ld\n", sum);
	return (0);
}
