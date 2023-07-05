#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head: A pointer to a pointer to a head of a linked list
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head==NULL)
		return;
	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
