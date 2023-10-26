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

	/* check if the input nuber is 0 */
	if (n == 0)
	{
		_putchar ('0');
		return;
	}

	/* iterate over the input */
	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (mask)
	{
		_putchar (((n & mask) != 0) ? '1' : '0');
		mask >>= 1;
	}
}
