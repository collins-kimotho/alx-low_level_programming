#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: double pointr to the start of the list
 * @n: intger to be included in the new node
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Create a new node */
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last_node = *head;

	/* Check if malloca failed */
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Assign data to the new node and set its next as NULL */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Otherwise, traverse to the end of the list */
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	/* Add the new node at the end of the list */
	last_node->next = new_node;

	return (new_node);
}
