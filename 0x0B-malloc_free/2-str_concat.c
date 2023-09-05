#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @x1: The string to be concatenated upon.
 * @x2: The string to be concatenated to x1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *x1, char *x2)
{
	char *concat_str;
	int index, concat_index = 0, len = 0;

	if (x1 == NULL)
		x1 = "";

	if (x2 == NULL)
		x2 = "";

	for (index = 0; x1[index] || x2[index]; index++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (index = 0; x1[index]; index++)
		concat_str[concat_index++] = x1[index];

	for (index = 0; x2[index]; index++)
		concat_str[concat_index++] = x2[index];

	return (concat_str);
}
