#include "holberton.h"

/**
 * print_chessboard - function that prints a chessboard.
 * @a: parameter used.
 *
 **/
void print_chessboard(char (*a)[8])
{
	int row = 0;
	int col;

	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			_putchar(a[row][col]);
			col++;
		}
		row++;
		_putchar('\n');
	}

}
