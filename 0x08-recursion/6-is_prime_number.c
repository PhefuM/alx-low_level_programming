#include "main.h"
#include <stdio.h>

int check_prime (int n, int i);

/**
 * is_prime_number - returns if the number is prime
 * @n:the number to check
 *
 * Return: true if the number is prime
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if number is prime
 * @n: number to check
 * @i: he iteration times
 *
 * Return: 1 for prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	
	if (n % 1 == 0 && i > 1)
		return (1);

	return (check_prime(n, i + 1));
}
	


