#include "lists.h"

/**
 * *get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the linked list.
 * @index: The index of the node to return.
 *
 * Return: Nth node or NULL if it doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int count = 0;

	while (ptr && count < index)
	{
		ptr = ptr->next;
		count++;
	}
	return (ptr ? ptr : NULL);
}
