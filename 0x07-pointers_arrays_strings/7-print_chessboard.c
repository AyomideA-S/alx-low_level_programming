#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 * @a: 2-dimensional array of characters
 */
void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
			_putchar(10);
		_putchar(a[i / 8][i % 8]);
	}
	_putchar(10);
}
