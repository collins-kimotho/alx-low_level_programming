#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * spaces in memory, which contains a copy of the string 
 * given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string or NULL if error
 */
char *_strdup(char *str)
{
	char *duplicate_str;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	duplicate_str = malloc(sizeof(char) * (len + 1));

	if (duplicate_str == NULL)
		return (NULL);

	while (i <= len)
	{
		duplicate_str[i] = str[i];
		i++;
	}
	return (duplicate_str);
}	
