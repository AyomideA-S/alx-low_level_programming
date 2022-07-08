#include "main.h"

/**
 * print_square - Prints square-shaped #
 * @size: The length of the square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j > 0; j--)
				_putchar(35);
			_putchar(10);
		}
	}
}
