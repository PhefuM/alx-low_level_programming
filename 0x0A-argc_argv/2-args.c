#include <stdio.h>
#include "main.h"

/**
 * main - prints all the arguments passed into main
 * @argc: number of command lines arguments
 * @argv: array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
