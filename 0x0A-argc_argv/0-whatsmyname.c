#include <stdio.h>

/**
 * print name - print the name of the programe
 *
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * return: 0
 */

int main(int argc, char *argv[])
{
	if (argc >=1)
	{
		printf("%s\n", argv[0]);
	}
	return 0;
}
