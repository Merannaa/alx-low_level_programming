#include "main.h"

/**
 * print_diagonal - Draws a diagonal lines according parameter
 * @n: The number of times to print diagonal lines
 * Return: empty
 */

void print_diagonal(int n)

{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
}
