#include "main.h"

/**
 * print_diagonal - Prints diagonal lines
 * @n: Diagonals to be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n < 1)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = i; j > 0; j--)
				_putchar(32);
			_putchar(92);
			_putchar(10);
		}
	}
}
