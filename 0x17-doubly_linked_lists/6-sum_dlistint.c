#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data n of a linked list.
 * @head: A pointer to the dlinked list.
 *
 * Return: Sum or zero list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
