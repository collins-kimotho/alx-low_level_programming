#include "lists.h"

/**
 * list_len - returns the number of elements in a lined list
 * @h: pointer to the list to count
 *
 * Return: the number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}
	return (k);
}
