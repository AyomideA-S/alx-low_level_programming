#include "main.h"

/**
 * print_line - Prints the lines of underscores
 * @n: Nunber of times to print underscore
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
		if (n <	1)
			_putchar(10);
	}
	_putchar(10);
}
