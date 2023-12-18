#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a dll
 * @head: pointer to the head of the list
 *
 * Return: the sum of all data of a dll, or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
