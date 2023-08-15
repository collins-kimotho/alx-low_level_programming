#include <stdio.h>

/**
 * main - prints the name of the file
 *
 * Return:Always 0(Success)
 */
int main(void)
{
	/*Get the name of the file.*/
	const char *filename = __FILE__;

	/*pRINT THE NAME FO THE FILE.*/
	printf("%s\n", filename);

	return (0);
}

