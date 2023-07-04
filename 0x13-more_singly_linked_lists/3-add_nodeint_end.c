#include "lists.h"

/**
 * add_nodeint_end - Adds the tail node.
 * @head: A pointer to the address of the list(first element).
 * @n: The data to store.
 *
 * Return: Pointer to the new node or NULL otherwise.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *p = *head;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (p->next)
		p = p->next;
	p->next = ptr;
	return (ptr);
}
