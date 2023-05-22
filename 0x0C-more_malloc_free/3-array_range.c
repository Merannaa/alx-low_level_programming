#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min
 * @max: max
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *n, x = 0;

	if (min > max)
		return (NULL);

	n = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (n == NULL)
		return (NULL);
	while (min <= max)
	{
		n[x] = min;
		x++;
		min++;
	}
	return (n);
}
