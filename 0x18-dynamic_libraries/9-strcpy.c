#include "main.h"
/**
 * _strcpy - copy a string
 * @dest: destination value
 * @src: source value
 * Return: the pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

