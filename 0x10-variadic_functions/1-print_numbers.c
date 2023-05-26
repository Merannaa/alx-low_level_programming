#include "variadic_functions.h"

/**
 * print_number - prints numbers by new line
 * @separator: string
 * @n: number
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int index;

	va_start(valist, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(valist, int);

		if (index != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}

