#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: int array
 * @size: size array
 * @cmp: compare function
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
