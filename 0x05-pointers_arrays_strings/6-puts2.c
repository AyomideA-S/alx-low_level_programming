#include "main.h"

/**
 * puts2 - Prints characters in a string
 * in steps of 2
 * @str: Array of characters
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
