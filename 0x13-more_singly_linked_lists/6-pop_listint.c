#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the linked list.
 *
 * Return: data in the head node.
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	data = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	return (data);
}
