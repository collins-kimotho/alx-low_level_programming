#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated
 * @old_size: The size, in bytes, of the allocated space fro ptr
 * @new_size: The new size, in bytes of the new memory block
 *
 * Return: A pointer to the newly allocated memory, or NULL if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	/* If new_size == old_size do othing and return ptr */
	if (new_size == old_size)
		return (ptr);

	/* If ptr is NULL, then the call is equivalent to malloc(new_size) */
	if (ptr == NULL)
		return (malloc(new_size));

	/* If new_size is qual to zero, and ptr is not NULL*/
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* Allocate memory for the new size */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* Copy the contents from ptr to the new memory area */
	for (i = 0; i < old_size && i < new_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];

	/* Free the old memory area */
	free(ptr);

	return (new_ptr);
}

