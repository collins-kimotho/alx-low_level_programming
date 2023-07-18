#include<stdio.h>
/**
 * main - Entry point
 *
 * Descripton - print both lower case and upper case alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Print the lowercasealphabet */
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	/* Print a new line */
	putchar('\n');
	/* Print the uppercase alphabet */
	for (char ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	/* Print a neww line*/
	putchar('\n');
	return (0);
}
