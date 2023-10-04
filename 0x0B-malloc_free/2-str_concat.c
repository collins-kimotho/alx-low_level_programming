# include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concateneates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, j;

	/*Treat NULL as empty */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Allocate memory*/
	concat_str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (concat_str == NULL)
		return (NULL);

	/*Concatenate strings*/
	for (i = 0; s1[i] != '\0'; i++)
		concat_str[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		concat_str[i] = s2[j];

	/*Null terminnate the new string*/
	concat_str[i] = '\0';

	return (concat_str);
}
