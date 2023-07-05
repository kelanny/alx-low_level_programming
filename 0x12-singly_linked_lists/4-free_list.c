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

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
