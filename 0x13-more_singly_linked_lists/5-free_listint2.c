#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list and sets head to NULL
 * @head: double pointer to the start of the list
 *
 */
void free_listint2(listint_t **head)
{
	/* Declear a temp node */
	listint_t *temp;

	/* Check if the list is not empty */
	if (head != NULL)
	{
		/* Traverse the list */
		while (*head != NULL)
		{
			temp = *head; /* Save the currnt node */
			*head = (*head)->next; /* Move to the next node */
			free(temp); /* Free the saved node */
		}
	}
	/* set the head to NULL */
	*head = NULL;
}
