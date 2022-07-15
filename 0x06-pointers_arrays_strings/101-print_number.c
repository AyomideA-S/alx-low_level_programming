#include "main.h"

/**
 * print_number - Prints integers
 * @n: An integer
 */
void print_number(int n)
{
	unsigned int i, x, flag;

	if (n < 0)
	{
		_putchar(45);
		i = -n;
	}
	else
	{
		i = n;
	}
	x = i;
	flag = 1;
	while (i >= 10)
	{
		i /= 10;
		flag *= 10;
	}
	for (; flag >= 1; flag /= 10)
	{
		_putchar(((x / flag) % 10) + 48);
	}
}
