#include "main.h"
/**
 *_memcpy - The _memcpy() function copies n bytes
 *from memory area to src to memory area dest
 * @dest: area where memory is stored
 * @src: area where memory is copied
 * @n: number of bytes to copy
 * Returns: copied memory with n byted change
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
