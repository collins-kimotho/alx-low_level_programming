#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: The string to split.
 *
 * Return: if str == NULL, str ++ "", or the function fails - NULL.
 * Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, l, word_count = 0;

	/* Return NUll if str == NULL or str == "" */
	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* Count the number of words in the string */
	for (i = 0; str[i]; i++)
		if ((str[i] != ' ' && str[i + 1] == ' ') || (str[i] != ' ' && str[i + 1] ==
					'\0'))
			word_count++;

	/* Allocate memory for the array of words */
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	/* Add each word to the array */
	for (i = 0, k = 0; k < word_count; k++)
	{
		/* Skip spaces*/
		while (str[i] == ' ')
			i++;

		/* Calculate the length of the word */
		for (j = i; str[j] != ' ' && str[j]; j++)
			;

		/* Allocate memory for the word */
		words[k] = malloc(sizeof(char) * (j - i + 1));
		if (words[k] == NULL)
		{
			while (k >= 0)
				free(words[--k]);
			free(words);
			return (NULL);
		}

		/* Add the word to the array */
		for (l = 0; l < j - i; l++)
			words[k][l] = str[i + l];
		words[k][l] = '\0';

		i = j;
	}

	/* Null terminate the array of words */
	words[word_count] = NULL;

	return (words);
}
