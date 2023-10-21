#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the ened of a linked list
 * @head: double pointer to the list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* Allocate memory for a new node */
	list_t *new_node = malloc(sizeof(list_t));
	/* Create apointer to the last node in the list */
	list_t *last = *head;

	/* if memory allocation failed, return NULL */
	if (!new_node)
		return (NULL);

	/*duplicate the string and store it in the new node */
	new_node->str = strdup(str);

	/* Store the length of the string in the new node */
	new_node->len = strlen(str);

	/* The new node is the last node, so its next pointer is NULL */
	new_node->next = NULL;

	/* If the list is empty, make the new node the head of the list */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
	/* Traverse to the last node in the list */
	while (last->next)
		last = last->next;

	/* Make the new node the next node of the last node */
	last->next = new_node;
	}

	/* Return address of the new node */
	return (new_node);
}
