#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int c = 122;

	while (c <= 122 && c >= 97)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
