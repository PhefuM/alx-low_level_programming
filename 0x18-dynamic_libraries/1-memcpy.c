#include<stdio.h>
#include<string.h>
#include"main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest : memory area to copy n bytes to
 * @src: memory area to copy n bytes from
 * @n: bytes to be copied
 * Return: memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
