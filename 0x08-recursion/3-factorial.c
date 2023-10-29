#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number
 *
 * Return: factorial fo the number
 */
int factorial(int n)
{
	/* Base case: if n is lower than 0 */
	if (n < 0)
	{
		return (-1);
	}
	/* Base case: if n is 0 */
	else if (n == 0)
	{
		return (1);
	}
	/*recursive case: multiply n with the factorial of n-1 */
	else
	{
		return (n * factorial(n - 1));
	}
}
