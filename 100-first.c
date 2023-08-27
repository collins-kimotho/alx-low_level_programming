#include <stdio.h>

/**
 * first - function that prints before the main function is executed
 * Return: no return.
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
