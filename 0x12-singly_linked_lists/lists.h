#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/**
 * struct list_s - singly linked list
 * @str: string in the malloc
 * @len: length of the string.
 * @next: A pointer to the next node
 *
 * Description: Singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h)i;
list_t *add_node(list_t **head, const char *str);
#endif
