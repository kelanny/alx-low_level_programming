#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer pointing to the linked list.
 * @index: The index of the node to return.
 *
 * Return: address to the nth node or NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int curr_idx = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (curr_idx == index)
			return (current);
		current = current->next;
		curr_idx++;
	}
	return (NULL);
}
