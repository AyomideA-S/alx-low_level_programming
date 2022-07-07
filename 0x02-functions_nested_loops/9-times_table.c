#include "main.h"
/**
 * times_table - Prints the
 * multiplication table from 0 to 9
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar((product % 10) + '0');
			}
			else
				_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
