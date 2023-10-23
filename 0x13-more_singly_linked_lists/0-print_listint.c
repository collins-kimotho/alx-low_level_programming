#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: ointer to the start of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	/* Initialize node counter */
	size_t nodes = 0;

	/* Loop through each node in the list */
	while (h != NULL)
	{
		/* Print the interger n in the current node */
		printf("%d\n", h->n);
		/* Incremenet node counter */
		nodes++;
		/* Move to the next node */
		h = h->next;
	}
	/* return the total number of nodes */
	return (nodes);
}

