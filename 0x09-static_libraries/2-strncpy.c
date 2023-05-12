#include "main.h"

/**
 *_strncpy - copys a string with n
 *@dest: copy to
 *@src: copy from
 *@n: number of char to be copied
 *Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y;

	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}
	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}
	return (dest);
}
