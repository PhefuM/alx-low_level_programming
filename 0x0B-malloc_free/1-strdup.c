#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns the pointer to a newly allocated memory space
 * containing a copy of the string given as parameter.
 * @str: the string to be copied.
 *
 * Return: NULL if str has insufficient memory or is NULL
 * Otherwise - a pointer to the allocated string.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if  (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}
