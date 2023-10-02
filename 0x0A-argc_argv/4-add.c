#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 if succesful, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *endptr;

		int num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0' || num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
