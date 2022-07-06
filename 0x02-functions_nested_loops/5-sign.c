#include "main.h"

/**
 * print_sign - Checks if a number is
 * positive, negative or zero
 *
 * @n: Number to be checked
 *
 * Return: 1 if n > 1 or 0 if n is 0
 * else -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
		_putchar(45);
	return (-1);
}
