#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 * @head: pointer to the start of the list
 *
 */
void free_listint(listint_t *head)
{
	/* Declreare a temp node */
	listint_t *temp;

	/* Traverse the list */
	while (head != NULL)
	{
		temp = head; /* save the current node */
		head = head->next; /* move to the next node */
		free(temp); /* free the saved node */
	}
}
