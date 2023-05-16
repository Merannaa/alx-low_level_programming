#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate of the string
 * @str: duplicate the string
 * Return: pointer to a new string
 */
char *_strdup(char *str)
{
	int x = 0, y = 1;
	char *k;

	if (str == NULL)
		return (NULL);

	while (str[y])
	{
		y++;
	}
	k = malloc((sizeof(char) * y) + 1);

	if (k == NULL)
		return (NULL);
	while (x < y)
	{
		k[x] = str[x];
		x++;
	}
	k[x] = '\0';
	return (k);
}
