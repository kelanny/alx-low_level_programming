#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: A double pointer to the list_t list
 * @str: The new str to add to the node
 * Return: Address of the new element otherwise return NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
