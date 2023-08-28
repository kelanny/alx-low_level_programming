#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * delete_dnodeint_at_index - Delete node at the given index of a dlist
 * @head: A pointer to a dlinked list pointer.
 * @index: The index which to delete a node.
 *
 * Return: 1. (Success) Else -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int curr_idx = 0;
	dlistint_t *curr = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}
	while (curr != NULL && curr_idx < index)
	{
		curr = curr->next;
		curr_idx++;
	}
	if (curr == NULL)
		return (-1);
	if (curr->prev != NULL)
		curr->prev->next = curr->next;
	free(curr);
	return (1);
}
