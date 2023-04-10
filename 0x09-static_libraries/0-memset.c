#include "main.h"

/**
 * _memset - fills a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: desired value
 * @n: number of bytes to be changed
 *
 * Return: new value of the target
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
