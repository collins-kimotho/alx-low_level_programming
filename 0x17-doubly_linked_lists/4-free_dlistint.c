#include "lists.h"

/**
 * free_dlistint - frees a dll
 * @head: pointer to the head of the list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
