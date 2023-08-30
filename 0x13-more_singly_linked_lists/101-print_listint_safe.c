#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listin_safe - Prints a listint_t linked list.
 * @head: A ponter to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *loop_start = NULL;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		count++;

		/* Check for a loop */
		if (current == loop_start)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			exit(98);
		}

		/* Mark the current node as visited */
		if (count == 0)
			loop_start = current;

		current = current->next;
		count++;

	}

	return (count);
}
