#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %d bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %d bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %d bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %d byes(s)\n", sizeof(e));
	return (0);
}
