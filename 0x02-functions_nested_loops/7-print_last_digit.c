#include "main.h"

/**
 * print_last_digit - Prints the
 * last digit of a number
 *
 * @n: Number to be checked
 *
 * Return: 0 (Success)
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		x = (-1 * (n % 10));
		_putchar(x + 48);
	}
	else
	{
		x = n % 10;
		_putchar((n % 10) + 48);
	}
	return (x);
}
