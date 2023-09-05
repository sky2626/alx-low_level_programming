#include "main.h"
#include <stdlib.h>

int word_len(char *tru);
int count_words(char *tru);
char **strtow(char *tru);

/**
 * word_len - Locates the index marking the end of the
 *            first word contained within a string.
 * @tru: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by tru.
 */
int word_len(char *tru)
{
	int index = 0, len = 0;

	while (*(tru + index) && *(tru + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}

/**
 * count_words - Counts the number of words contained within a string.
 * @tru: The string to be searched.
 *
 * Return: The number of words contained within tru.
 */
int count_words(char *tru)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(tru + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(tru + index) != ' ')
		{
			words++;
			index += word_len(tru + index);
		}
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @tru: The string to be split.
 *
 * Return: If tru = NULL, tru = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *tru)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (tru == NULL || tru[0] == '\0')
		return (NULL);

	words = count_words(tru);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (tru[index] == ' ')
			index++;

		letters = word_len(tru + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = tru[index++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
