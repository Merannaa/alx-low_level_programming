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
	va_list valist;
	int sum = 0;
	unsigned int x;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (x = 0; x < n; x++)

		sum += va_arg(valist, int);


	va_end(valist);

	return (sum);
}
