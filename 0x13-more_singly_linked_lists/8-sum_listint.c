#include "lists.h"

/**
 * sum_listint - returns the sum of all the dat in a linked list
 * @head: pointer tot he start of the list
 *
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	/* traverse the list and add up the data */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
