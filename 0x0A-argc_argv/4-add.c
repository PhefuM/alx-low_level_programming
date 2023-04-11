#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include  "main.h"
/**
 * main - takes in all integer arguments and returns the sum
 * @argc: number of command line arguments
 * @argv: array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j - atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	return (0);
}
