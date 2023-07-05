#include "lists.h"

/**
 * *insert_nodeint_at_index - Inserts a new node at  a given position.
 * @head: A pointer to a pointer to the linked list.
 * @idx: The index where to insert our new node.
 * @n: The data to add to the new node.
 *
 * Return: the address of the new node or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *ptr, *new;

	if (*head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	ptr = *head;
	while (ptr != NULL && count < idx - 1)
	{
		ptr = ptr->next;
		count++;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
