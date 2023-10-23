#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @n: integer to be included in the new node
 * @head: double pointer to the start of the list
 *
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Create a new node */
	listint_t *new_node = malloc(sizeof(listint_t));

	/* Check if malloc failed */
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Assign data to the new node */
	new_node->n = n;

	/* Make the new node point to the current first node */
	new_node->next = *head;

	/* Make the head point to the new first node */
	*head = new_node;

	return (new_node);
}
