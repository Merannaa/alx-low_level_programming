#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, y, n;

	for (y = 0; y <= (size * size); y = y + size + 1)
	{
		sum1 = sum1 + a[y];
	}
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
	{
		sum2 = sum2 + a[n];
	}
	printf("%d, %d\n", sum1, sum2);
}
