#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog
 * @d: The dog struct to free
 *
 * Description: This function frees a variable of type struct dog.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
