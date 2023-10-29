#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 *
 * Description: this recursive function calculates the lenghth of a string
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	/* Base case: if we've reached the end of the string, return 0 */
	if (*s == '\0')
	{
		return (0);
	}
	/* recursive case: call the function with the next cha */
	return (1 + _strlen_recursion(s + 1));
}
