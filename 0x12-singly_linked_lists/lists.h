#ifndef LISTS_H
#define LISTS_H

/*
 * Auth Kazzoouutt
 * About: Header file containing prototypes and
 * definitions for all functions and types.
 */

#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'd string)
 * @len: Length of the string
 * @next: points to the node
 *
 * Description: Singly linked list node structure
 * for project.
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *nect;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */
