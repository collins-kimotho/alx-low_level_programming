#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int temp;

	while (head)
	{
		temp = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (temp > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
