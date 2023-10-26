#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the convereted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	/* check if string is null */
	if (b == NULL)
	{
		return (0);
	}

	/* iterate over each character in the string */
	while (*b)
	{
		/* if char is not 0 or 1, return 0 */
		if (*b != '0' && *b != '1')
			return (0);

		/* shift the current num to left andd binary to current */
		num <<= 1;
		num += *b - '0';

		/* move to next char */
		b++;
	}

	/* return the converted no */
	return (num);
}
