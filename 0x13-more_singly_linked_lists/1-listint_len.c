#include "lists.h"

/**
 * listint_len - returns the number of elements in a klinked list
 * @h: pointer to the start of the list
 *
 *
 * Return: number f nods in the list
 */
size_t listint_len(const listint_t *h)
{
	/* Initialize the node counter */
	size_t nodes = 0;

	/* Loop through each node in the list */
	while (h != NULL)
	{
		nodes++; /* Increment node counter */
		h = h->next; /* move to the next node */
	}
	return (nodes); /* return the total number of nodes */
}
