#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *add_node_end - Adds a new node at the end of a linked list.
 * @head: A pointer to a pointer to a linked list
 * @str: A string to add to the data.
 *
 * Return: A pointer to the new node or NULL if it fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *new;
	list_t *ptr = *head;

	while (str[len] != '\0')
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
	return (new);
}
