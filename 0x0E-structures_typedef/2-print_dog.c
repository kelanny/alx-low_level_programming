#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - The function prints a struct dog
 * @d: A pointer to the struct
 *
 * Return: The dog struct unless where NUll it returns nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
