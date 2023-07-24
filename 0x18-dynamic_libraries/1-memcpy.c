#include "main.h"

/**
 * _memcpy - function that copies memory
 * @n: number of bytes
 * @dest: memory where is stored
 * @src: memory where is copied
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
