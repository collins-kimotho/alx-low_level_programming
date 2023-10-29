# include "main.h"

/**
 * _sqrt_recursion - returns the natural sqr root of a number
 * @n: the number to find the sqr root of
 *
 * Return: natural sqr root f n
 */
int _sqrt_recursion(int n)
{
	static int i = 0;

	if (i * i > n)
	{
		i = 0;
		return (-1);
	}
	else if (i * i == n)
	{
		int result = i;
		i = 0;
		return (result);
	}
	else
	{
		i++;
		return _sqrt_recursion(n);
	}
}
