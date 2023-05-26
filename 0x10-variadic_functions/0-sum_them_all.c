#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: number arg
 * @...: integer to sum
 * Return: int sum
 */
int sum_them_all(const unsigned int n, ...);
{
	int sum = 0, y = n;
	va_list ap;
	
	if (!n)
		return (0);
	va_start(ap, n);
	while (y--)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
