#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array f nmemb elements of size bytes each
 * @nmemb: The number of elements
 * @size: The size in bytes of each element
 *
 * Return: A pointer to the allocated memory
 * allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	/* If nmemb of size is 0, return NULL */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory */
	p = malloc(nmemb * size);

	/* If malloc fails, return NULL */
	if (p == NULL)
		return (NULL);

	/* Set the memory to zero */
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
