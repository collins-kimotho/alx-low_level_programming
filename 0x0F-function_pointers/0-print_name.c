#include<stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name using pointer
 * @name: name of the person
 * @f: This functionto use to print the name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	/*Check that the name is not NULL.*/
	if (name == NULL)
	{
		return;
	}

	/*Call the function f to print the name.*/
	f(name);
}
