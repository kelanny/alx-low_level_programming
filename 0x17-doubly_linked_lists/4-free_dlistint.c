#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the dlistint_t to free.
 *
 * Return: Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
