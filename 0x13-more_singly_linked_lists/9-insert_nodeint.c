#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: double pointer to the start of the list
 * @idx: index of the list where new node should be added
 * @n: integer to be included in the new node
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp = *head;
	unsigned int i;

	/* allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Assign data to the new node */
	new_node->n = n;

	/* if adding at the beginning of the list */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* traverse the list ip to the node before the desired position */
	for (i = 0; i < idx - 1; i++)
	{
		/* if we reach a NULL pointer, we cannot add a node at idx */
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp = temp->next;
	}

	/* insert the new node */
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
