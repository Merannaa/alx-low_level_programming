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
	unsigned int x, y, s1_length, s2_length;

	/*if strings empty NULL is passed*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*count the length of the two strings*/

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)

	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)

	/*reserve memory for 1 & 2*/

	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/*copy s1 into str*/
	for (x = 0; s1[x] != '\0'; x++)
		str[x] = s1[x];
	/*copy s2 into str*/
	for (y = 0; y < n; y++)
	{
		str[x] = s2[y];
		x++;
	}
	str[x] = '\0';
	return (str);
}


