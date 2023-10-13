#include <stdarg.h>
#include<stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list the type of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	char current;
	int i = 0;

	/* Initialize va_list */
	va_start(args, format);

	/* Loop through format string */
	while (format && format[i])
	{
		current = format[i++];
		switch (current)
		{
			case 'c':
				printf("%c, ", va_arg(args, int));
				break;
			case 'i':
				printf("%d, ", va_arg(args, int));
				break;
			case 'f':
				printf("%f, ", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nill)";
				printf("%s, ", str);
				break;
		}
	}
	printf("rn");

	/* clean u va_list */
	va_end(args);
}
