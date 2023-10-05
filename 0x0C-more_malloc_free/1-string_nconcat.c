#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n characters
 * @s1: The first string
 * @s2: the second string
 * @n: The maximum number of characters to concatenate from string 2.
 *
 * Return: If fucntion fails - NULL
 * Otherwise - A pointer to the newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len_s1 = 0, len_s2 = 0, i;

	/* If s1 or s2 is NULL, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 and s2 */
	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;

	/* Allocate memory for the new string */
	if (n >= len_s2)
		concat_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	else
		concat_str = malloc(sizeof(char) * (len_s1 + n + 1));

	/* If malloc failed, return NULL */
	if (concat_str == NULL)
		return (NULL);

	/* Copy s1 into the new strong */
	for (i = 0; i < len_s1; i++)
		concat_str[i] = s1[i];

	/* Copy up to n characters from s2 into the new string */
	for (i = 0; i < n && s2[i]; i++)
		concat_str[len_s1 + i] = s2[i];

	/* Add a null terminator at the end of the new string */
	concat_str[len_s1 + i] = '\0';

	return (concat_str);
}

