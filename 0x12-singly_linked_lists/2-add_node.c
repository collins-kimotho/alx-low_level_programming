#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adss a new node at the beginning of a list
 * @head: head of alist
 * @str: string
 *
 * Return: address of element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if(!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = (*head);

	(*head) = new_node;

	return (new_node);
}
