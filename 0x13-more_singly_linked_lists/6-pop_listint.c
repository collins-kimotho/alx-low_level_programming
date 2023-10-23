#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer to the start of the list
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	/* check if the list is not empty */
	if (*head == NULL)
	{
		return (0);
	}

	/* save the current head node */
	temp = *head;

	/* save the head node's data */
	n = (*head)->n;

	/* Move the head pointer to the next node */
	*head = (*head)->next;

	/* free the old head node */
	free(temp);

	return (n);
}
