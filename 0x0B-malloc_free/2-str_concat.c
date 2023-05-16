#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first concatenate string
 * @s2: second concatenate string
 * Return: concatenates two strings
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, v = 0, z = 0;
	char *k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x])
		x++;
	while (s2[y])
		y++;
	z = x + y;
	k = malloc((sizeof(char) * z) + 1);
	if (k == NULL)
		return (NULL);
	y = 0;
	while (v < z)
	{
		if (v <= x)
			k[v] = s1[v];
		if (v >= x)
		{
			k[v] = s2[y];
			y++;
		}
		v++;
	}
	k[v] = '\0';
	return (k);
}
