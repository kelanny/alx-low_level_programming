#include "lists.h"

/**
 * delete_nodeint_at_index - Delete the node at index [index] of a linked list
 * @head: A pointer to a pointer to a linked list
 * @index: The index in which we delete a node.
 *
 * Return: 1 if successful else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp, *ptr = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	while (count < index - 1)
	{
		if (!ptr || !(ptr->next))
			return (-1);
		ptr = ptr->next;
		count++;
	}
	temp = ptr->next;
	ptr->next = temp->next;
	free(temp);
	return (1);
}
