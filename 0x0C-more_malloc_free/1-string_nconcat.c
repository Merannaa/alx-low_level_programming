#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes
 * Return: pointer to space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x = 0, y = 0, h = 0, g = 0;

	/*if strings empty NULL is passed*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x])
		x++;

	while (s2[h])
		h++;

	if (n >= h)
		g = x + h;
	else
		g = x + n;
	str = malloc(sizeof(char) * g + 1);
	if (str == NULL)
		return (NULL);
	h = 0;
	while (y < g)
	{
		if (y <= x)
			str[y] = s1[y];
		if (y >= x)
		{
			str[y] = s2[h];
		h++;
		}
		y++;
	}
	str[y] = '\0';
	return (str);
}
