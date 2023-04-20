#include "3-calc.h"

/**
 * op_add - Returns the sum of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_mul - Returns the prduct of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbers
 * @a: the first number
 * @b: the seconf number
 *
 * Return: the qoutient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: the first number
 * @b: the second number
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a & b);
}

