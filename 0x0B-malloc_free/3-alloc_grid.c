#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  pointer to a 2 dimensional array of integers
 * @width: grid width
 * @height: grid height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int x, y, z, v;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		s[x] = malloc(sizeof(int) * width);
		if (s[x] == NULL)
		{
			for (y = x; y >= 0; y--)
			{
				free(s[y]);
			}
			free(s);
			return (NULL);
		}
	}
	for (z = 0; z < height; z++)
	{
		for (v = 0; v < width; v++)
		{
			s[z][v] = 0;
		}
	}
	return (s);
}

