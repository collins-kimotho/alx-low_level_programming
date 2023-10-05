#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	/* Allocate memory */
	void *ptr = malloc(b);

	/* If malloc failed, terminate th process */
	if (ptr == NULL)
	{
		exit(98);
	}

	/* Otherwise return the pointer to the allocated memory */
	return (ptr);
}
