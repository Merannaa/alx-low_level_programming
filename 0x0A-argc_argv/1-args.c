#include "main.h"
#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it
 * @argc: arg count
 * @argv: arg v
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}