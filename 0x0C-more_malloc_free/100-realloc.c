#include "main.h"
#include <stdlib.h>

/**
 * _realloc - The function reallocates a memory block using malloc and free
 * @ptr:  Pointer to the the prevviously allocated memory
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: A pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_new;
	char *ptr_old;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr_new = malloc(new_size);
	if (!ptr_new)
		return (NULL);
	ptr_old = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr_new[i] = ptr_old[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		ptr_new[i] = ptr_old[i];
	}
	free(ptr);
	return (ptr_new);
}
