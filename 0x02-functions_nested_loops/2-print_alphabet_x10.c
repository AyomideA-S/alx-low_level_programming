#include "main.h"

/**
 * print_alphabet_x10 - Print every letter of
 * the alphabet in lowercase 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
