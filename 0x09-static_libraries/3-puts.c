#include "main.h"

/**
 * _puts - Prints a string followed by
 * a new line
 * @str: Array of characters
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		_putchar(str[i]);
		i++;
	}
	 _putchar(10);
}
