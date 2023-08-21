#include"main.h"
#include<string.h>

/**
 * _strstr - locates the first appearanc of the substring needle in the string
 *           haystack andterminating null bytes (0) are not compared
 * @needle: substring we are searching for
 * @haystack: string to be searched
 * Return: pointer to the beginning of the located substring
 *         NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		while (*needle != '\0' && *needle == *haystack)
		{
			++haystack;
			++needle;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		++haystack;
	}
	return ('\0');
}
