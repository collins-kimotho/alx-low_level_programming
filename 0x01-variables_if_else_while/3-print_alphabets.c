#include<stdio.h>
/**
 * main - Entry point
 *
 * Description - print both uper and lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Print lowercase alphabet*/
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/* Print a new line*/
	putchar('\n');
	/* Print upercase alphabet*/
	ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
			ch++;
	}
	/* Print new line*/
	putchar('\n');
	return (0);
}
