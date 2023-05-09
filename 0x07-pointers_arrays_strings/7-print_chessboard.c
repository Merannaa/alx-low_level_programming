#include "main.h"

/**
 * print_chessboard - entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int x, n;

	for (x = 0; x < 8; x++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[x][n]);
		_putchar('\n');
	}
}
