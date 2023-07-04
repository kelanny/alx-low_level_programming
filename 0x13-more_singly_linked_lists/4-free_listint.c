#include "lists.h"

/**
 * free_listint - Frees a listint_t list struct.
 * @head: A pointer to the first node of linked list.
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
