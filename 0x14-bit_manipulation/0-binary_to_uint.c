#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Function converts binary
 * number to an unsigned int.
 * @b: A pointer to a stringof 0 and 1 chars.
 *
 * Return: converted number or if
 *         there is one orore chars in the string b that is not 0 or 1
 *         b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int p;

	p = 0;
	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		p <<= 1;
		if (*b++ == '1')
		{
			p |= 1;
		}
	}
	return (p);
}
