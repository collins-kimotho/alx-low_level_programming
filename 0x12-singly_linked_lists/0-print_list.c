#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_list - prints all the elemenst of a list
 * @h: pointer to the list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nill)\n");
		k++;
		h = h->next;
	}
	return (k);
}
