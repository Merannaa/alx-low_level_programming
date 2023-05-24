#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: int array
 * @size: size array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && size && action)
	{ 
		x = 0;
		while (x < size)
			action(array[x]);
		x++;
	}
}
