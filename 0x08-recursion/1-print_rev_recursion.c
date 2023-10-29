#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string
 *
 * Description: This is a recursive function that prints a string in reverse
 */
void _print_rev_recursion(char *s)
{
	/* Base case: if we've reached the end of the string, return */
	if (*s == '\0')
	{
		return;
	}
	/* recursive call. call the fucntion with the next char */
	_print_rev_recursion(s + 1);

	/* print the currect char */
	_putchar(*s);
}
