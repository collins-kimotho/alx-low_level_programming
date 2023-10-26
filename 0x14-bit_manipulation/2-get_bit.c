#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to get the bit from
 * @index: the index of the bit to get
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* declare the variable mask */
	unsigned long int mask;

	/* check its validity */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* create the bit mask to check the bit at index */
	mask = 1UL << index;

	/* return 1 if the bit is set */
	return ((n & mask) != 0);
}

