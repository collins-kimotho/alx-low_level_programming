#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: double pointer to the start of the list
 * @index: index of the node that should be deleted
 *
 *
 * Return: 1 if success -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *next_node;
	unsigned int i;

	/* if the list is empty, return -1 */
	if (*head == NULL)
	{
		return (-1);
	}

	/* if deleting the first node */
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	/* traverse the list up to the node before desired position */
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		/* if we reach a NULL pointer, we cannode delete a node at index */
		if (temp == NULL)
		{
			return (-1);
		}
		temp = temp->next;
	}
	/* if we reach a NULL pointer, we cannot delete a node at index */
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	/* delete the node */
	next_node = temp->next->next;
	free(temp->next);
	temp->next = next_node;
	return (1);
}
