#include "lists.h"

/**
 * *add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to a linked list.
 * @n: A number to store in linked list as value.
 *
 * Return: An address of new element or NULL if failded.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
