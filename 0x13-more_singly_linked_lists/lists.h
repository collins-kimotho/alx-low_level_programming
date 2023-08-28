#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/**
 * struct listint_s - Singly linked list.
 * @n: integer
 * @next: Points to the next node
 *
 * Description: SIngly linked list node structure.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* Provided putchar function */
int _putchar(char c);

/* Function prototypes*/
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);

#endif /* LISTS_H*/
