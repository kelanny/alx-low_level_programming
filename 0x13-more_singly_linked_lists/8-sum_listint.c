#include "lists.h"

/**
 * sum_listint - Returns the sum of all data n of a linked list.
 * @head: A pointer to the linked list.
 *
 * Return: Sum of the data or 0 otherwise.
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
