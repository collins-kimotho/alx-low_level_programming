#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* declare variables at the beginning of the function */
	unsigned long int xor;
	unsigned int flip_count;

	/* calc the xor of n and m */
	xor = n ^ m;

	/* count the number of set bits in the xor */
	flip_count = 0;
	while (xor)
	{
		if (xor & 1)
		{
			flip_count++;
		}
		xor >>= 1;
	}

		/* return number of bits to flip */
		return (flip_count);
}
