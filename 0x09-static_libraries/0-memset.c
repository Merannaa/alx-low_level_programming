#include "main.h"

/**
 * _memset - fill the memory with a specific value
 * @n: number of bytes to be changed
 * @s: starting address of memory to be filled
 * @b: the desired value
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
