#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Counts the number of bit needed to be
 *             flipped to get from one number to another
 * @n: The number
 * @m: The number to flip n to
 *
 * Return: The necessary number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	i = 0;
	while (n || m)
	{
		if ((n & 1) != (m & 1))
		{
			i++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (i);
}
