#include "main.h"

/**
 * _strstr - entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *r = needle;

		while (*k == *r && *r != '\0')
		{
			k++;
			r++;
		}
		if (*r == '\0')
			return (haystack);
	}
	return (0);
}
