#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - Frees a linked list.
 * @h: A pointer to the header of a linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *current = *h;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;

		current->next = NULL;

		free(current);
		node_count++;

		current = next;
	}
	*h = NULL;

	return (node_count);
}
