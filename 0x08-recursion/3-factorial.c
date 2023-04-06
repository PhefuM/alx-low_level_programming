#include "main.h"

/**
 * factorial - returns the factorial of a number
 *@n: the number of the factorial of
 *
 * return: if n > 0 - the factorial of the number
 *         if n < 0 - use 1 to indicate an error
 * return: 0 for factorial
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 0 && n <= 1)
	{
		return (1);
	}

	result *= factorial(n - 1);

	return (result);
}
