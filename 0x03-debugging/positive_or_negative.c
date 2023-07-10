#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/* more headers goes there */
/**
 * positive_or_negavite - Check if a number is positive or negative.
 * Added if condition that check the value of i and print a message
 * @i: Integer to check
 * Return: 0 (Success)
 */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
