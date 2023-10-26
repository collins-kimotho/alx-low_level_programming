#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted to binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	char flag = 0;

	/* create a mask with the highest bit set */
	mask = 1UL << (sizeof(n) * 8 - 1);

	/* iterate over teach bit from left to right */
	while (mask)
	{
		if ((n & mask && flag) || mask == 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (n & mask || flag)
		{
			_putchar('0');
			flag = 1;
		}

		/* shift the mask to the right by one bit */
		mask >>= 1;
	}
}
