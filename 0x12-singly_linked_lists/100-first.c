#include "lists.h"

void first(void) __attribute__ ((constructor));
/**
 * first - prints a sense before the
 * main function is executed
 */

void first(void)
{
	printf("You're beat! and yet, you must also allow, \n");
	printf("I bore my house upon my back!\n");
}
