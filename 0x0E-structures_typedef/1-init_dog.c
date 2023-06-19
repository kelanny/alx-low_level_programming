#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - The function initialize a variable of type struct dog
 * @d: A pointer to the struct dog
 * @name: First member of struct
 * @age: SEcond member of dog struct
 * @owner: Third member of dog struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
