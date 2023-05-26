#include "3-calc.h"

/**
 * op_add - add 2 int
 * @a: first int
 * @b: scond int
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2 int
 * @a: first int
 * @b: scond int
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 int
 * @a: first int
 * @b: scond int
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 int
 * @a: first int
 * @b: scond int
 * Return: the result of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulo 2 int
 * @a: first int
 * @b: scond int
 * Return: the remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
