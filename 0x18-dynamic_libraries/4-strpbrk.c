#include "main.h"
/**
 * _strpbrk - locates the character in a string
 * @s: string to search
 * @accept: the bytes to find
 * Return: first c occurance if found in string
 *         NULL if c is not found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (*s == *accept)
		{
			return (s);
			accept++;
		}
		s++;
	}
	return ('\0');
}
