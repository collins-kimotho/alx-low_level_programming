#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: The first value of the array
 * @max: The last value of the array
 *
 * Return: A pointer to the newly created array,
 * or NULL if min > max of if malloc fails
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	/* If min > max, return NULL */
	if (min > max)
		return (NULL);

	/* Allocate memory for the array */
	array = malloc(sizeof(int) * ((max - min) + 1));

	/* If malloc fails, return NULL */
	if (array == NULL)
		return (NULL);

	/* Fill the array with the values from min to max */
	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}
