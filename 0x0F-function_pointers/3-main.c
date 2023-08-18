#include "3-calc.h"

/**
 * main - creating main function
 *@ac: int
 *@argv: arguments
 *Return: 0.
 */

int main(int ac, char *argv[])
{
	int x;
	int y;
	int (*a)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = get_op_func(argv[2]);

	if (a == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	printf("%d\n", a(x, y));

	return (0);
}
