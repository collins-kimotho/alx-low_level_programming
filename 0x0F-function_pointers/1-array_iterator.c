#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterates over an array and calls a function on each element
 *
 * @array: A pointer to the array
 * @size: The number of elements in the arrat
 * @action: Apointer to the function to call on each element
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	/*Check that the array and action are not NULL.*/
	if (array == NULL || action == NULL)
	{
		return;
	}

	while (i < size)
	{
		/* Call the action function on the element at index i. */
		action(array[i]);
		i++;
	}
}
