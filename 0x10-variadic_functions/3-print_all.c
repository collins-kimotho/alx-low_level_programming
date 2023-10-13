#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	const char *ptr;
	unsigned int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		ptr = ", ";
		if (format[i + 1] == '\0')
			ptr = "";

		switch (format[i++])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), ptr);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int), ptr);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), ptr);
				/* fall through */
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", str, ptr);
				break;
		}
	}
	printf("\n");

	va_end(args);
}
