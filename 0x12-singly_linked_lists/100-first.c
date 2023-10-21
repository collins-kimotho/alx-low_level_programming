#include <stdio.h>
#include "lists.h"
/**
 * before_main - prints a specific string before main function
 * @constructor: attribute to specify a function
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,");
	printf("\\nI bore my house upon my back!\\n\n");
}
