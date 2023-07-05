#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list.
 * @head: A pointer to the list
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head->next == NULL)
		free(head);
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
