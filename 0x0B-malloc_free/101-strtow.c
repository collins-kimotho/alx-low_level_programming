#include <stdlib.h>

/**
 * wordlen - Helper function to calculate length of word.
 * @s: the string to calculate length of word.
 *
 * Return: length of word.
 */
int wordlen(char *s)
{
	int len = 0;

	while (*s != ' ' && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * count_words - helper function to count number of words in a string.
 * @s: the strong to count number of words
 *
 * Return: number of words in the string.
 */
int count_words(char *s)
{
	int count = 0, inword = 0;

	while (*s)
	{
		if (*s != ' ')
		{
			s++;
			inword = 1;
		}
		else
		{
			if (inword)
				count++;
			inword = 0;
			s++;
		}
	}
	if (inword)
		count++;
	return (count);
}

/**
 * strtow - splits a string into words.
 * @str: the string to split.
 *
 * Return: NULL, "" or array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int wc, i, j;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wc = count_words(str);
	if (wc == 0)
		return (NULL);

	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < wc; i++)
	{
		while (*str == ' ')
			str++;

		words[i] = malloc((wordlen(str) + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (; i >= 0; i--)
				free(words[i]);
			free(words);
			return (NULL);
		}

		for (j = 0; *(str + j) && *(str + j) != ' '; j++)
			words[i][j] = *(str + j);
		words[i][j] = '\0';

		str += j;
	}
	words[wc] = NULL;

	return (words);
}
