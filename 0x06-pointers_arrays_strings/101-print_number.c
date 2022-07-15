#include "main.h"

/**
 * print_number - Prints integers
 * @n: An integer
 */
void print_number(int n)
{
	int flag;
	unsigned int i;

	flag = 0;
	i = 0;
	if (n == 0)
	{
		_putchar(48);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		if (n % 10 == 0)
			flag = 1;
		while (n)
		{
			if (n % 10 == 0 && flag)
				flag++;
			i = (i * 10) + (n % 10);
			n /= 10;
		}
		while (i)
		{
			_putchar((i % 10) + 48);
			i /= 10;
		}
		flag--;
		while (flag-- > 0)
			_putchar(48);
	}
}
