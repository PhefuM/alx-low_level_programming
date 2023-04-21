#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return sum when given unknown amount of arguments
 * @n: integers to add
 * @...: a variable number of parameters to calculate the sum of
 *
 * Return: if n == 0 - 0
 * otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);
	return (sum);
}
