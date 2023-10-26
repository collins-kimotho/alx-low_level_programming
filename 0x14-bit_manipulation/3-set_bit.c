#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to set the bit in
 * @index: the index of the bit to set
 *
 * Return: 1 if it worked, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* check if the index is valid */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* create a mask with a 1 at the given index */
	mask = 1UL << index;

	/* set te bit at index in n */
	*n |= mask;

	return (1);
}
