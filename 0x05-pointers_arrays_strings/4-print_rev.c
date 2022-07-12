#include "main.h"

/**
 * print_rev - Prints a string followed by
 * a new line
 * @s: Array of characters
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar(10);
}
