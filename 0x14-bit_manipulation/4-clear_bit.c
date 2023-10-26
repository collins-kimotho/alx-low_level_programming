#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to the number to set the bit in
 * @index: the index of the bit to set
 *
 * Return: 1 if successful, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* declaremask mask */
	unsigned long int mask;

	/* check for the length of the number of bits in n */
	if (index >= (sizeof(*n) * 8))
		return (-1);

	/* initialize maskwith 1 */
	mask = 1UL << index;

	/* set the bit at index in n to 0 */
	*n &= ~mask;

	return (1);
}
