#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, g = 0;
	char *n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	g = nmemb * size;
	n = malloc(g);

	if (n == NULL)
		return (NULL);

	while (x < g)
	{
		n[x] = 0;
		x++;
	}
	return (n);
}
