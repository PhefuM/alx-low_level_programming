#include <stdio.h>

/**
 * main - Prints first 52 Fibonacci numbers
 * Return: Nothing!
 */
int main(void)
{
	int i = 0;
	long j = 0, k = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%lu", j);
	else
	{
	k += j;
	j = k - j;
	printf(", %ld", k);
	}
	++i;
	}
	printf("\n");
	return (0);

}
