#include "function_pointers.h"
#include "3-calc.h"

/**
 * Defining operations
 *@a: int
 *@b: int
 * op_add - addition
 *op_sub - subtracting
 *op_mul - multiplication
 *op_div - division
 *op_mod - modulus
 * Return: result of operation.
 */

int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
