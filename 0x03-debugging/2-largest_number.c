#include<stdio.h>

/**
 * largest_number - returns the largest of 3 number
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = a;

	if (b > largest)
	{
		largest = b;
	}
	if (c > largest)
	{
		largest = c;
	}

	return (largest);
	putchar('\n');
}

