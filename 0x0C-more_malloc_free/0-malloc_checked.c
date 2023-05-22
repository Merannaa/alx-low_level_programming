#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc
 * @b: integer
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *r = malloc(b);

	if (r == 0)
		exit(98);
	return (r);
}
