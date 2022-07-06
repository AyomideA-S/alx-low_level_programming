#include "main.h"

/**
 * print_sign - Checks if a number is
 * positive, negative or zero
 *
 * @c: ASCII value of the character
 * to be checked
 *
 * Return: 1 if lowercase else 0
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c == 0)
	{
		_putchar(48);
		return (0);
	}
	else
		_putchar(45);
	return (-1);
}
