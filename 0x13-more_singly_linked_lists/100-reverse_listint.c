#include "lists.h"

/**
 * reverse_listint - Reverse a linked list.
 * @head: A double pointer to the head of a linked list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next; /*Store the next node */
		(*head)->next = prev; /* Change the next of the current node */

		prev = *head;
		*head = next;
	}

	*head = prev; /* Set the new head to the last node (prev) */

	return (*head);
}
