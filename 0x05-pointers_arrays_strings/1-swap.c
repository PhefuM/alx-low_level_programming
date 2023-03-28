#include "main.h"
/**
 * swap_int - function declared
 * @a: firstd interger
 * @b: second interger
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
