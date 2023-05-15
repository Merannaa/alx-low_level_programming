#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: arg count
 * @argv: arg v
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
