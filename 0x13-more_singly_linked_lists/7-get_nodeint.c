#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: pointer to the start of the list
 * @index: index of the node
 *
 * Return: nth node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	/* traverse the list up to the nth node */
	for (i = 0; i < index; i++)
	{
		/* if the node does not exist, return NULL */
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
