#include "main.h"

/**
 * _puts_recursion - Prints a string by implementing recursion
 * @s: Source memory address
 */
void _puts_recursion(char *s)
{
	if (*s != 0)
	{
		_putchar(*s);
	}
	else
	{
		_putchar(10);
		return;
	}
		s++;
	_puts_recursion(s);
}
