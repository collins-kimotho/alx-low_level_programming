#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head of node and returns the head node's data.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The data of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head != NULL)
	{
		temp = *head;
		data = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (data);
}
