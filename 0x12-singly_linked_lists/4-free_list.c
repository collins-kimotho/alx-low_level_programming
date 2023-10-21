#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to the linked list
 *
 */
void free_list(list_t *head)
{
	/* Temporary node pointer */
	list_t *temp;

	/* Traverse the list */
	while (head)
	{
		/* point temp to the current node */
		temp = head;

		/* move head to the next node */
		head = head->next;

		/* free the string in temp node */
		free(temp->str);

		/* free the temp node */
		free(temp);
	}
}
