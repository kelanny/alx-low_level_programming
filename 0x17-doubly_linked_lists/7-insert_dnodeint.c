#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to dlist pointer.
 * @idx: Index to insert a new node.
 * @n: Data to insert to the new node.
 *
 * Return: Address of the new node or NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int curr_idx = 0;
	dlistint_t *curr = *h;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (curr != NULL && curr_idx < idx - 1)
	{
		curr = curr->next;
		curr_idx++;
	}
	if (curr == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = curr;
	new_node->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = new_node;
	curr->next = new_node;
	return (new_node);
}
