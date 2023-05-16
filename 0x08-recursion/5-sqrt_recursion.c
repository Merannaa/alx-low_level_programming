#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be calculate the natural square root
 * Return: the natural square root
 */
int _sqrt(int n, int x);
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
/**
 * _sqrt - Calculate natural square root
 * @n: number to be calculat the square root
 * @x: iterate number
 * Return : the natural square root
 */
int _sqrt(int n, int x)
{

	if (x * x == n)
		return (x);
	else if (x * x < n)
	return (sqrt(n, x + 1));
	else
		return (-1);
}
