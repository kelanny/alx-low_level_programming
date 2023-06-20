#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - This function free the memory allocated to dog
 * @d: A pointer of type dog t
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
