#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - entry point
 * @a: array
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; r < 0; r++)
	{
		for (c = 0; c < 0; c++)
			_putchar(a[r][c]);
		_putchar('\n');
	}
}
