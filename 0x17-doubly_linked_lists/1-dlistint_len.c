#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - Returnts the number of elements inalinked list.
 * @h: A pointer to the linked list.
 *
 * Return: no of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
