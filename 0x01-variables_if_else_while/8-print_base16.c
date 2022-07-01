#include <stdio.h>

/**
 * main - Entry point
 * This program prints every hexadecimal character
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (i = 97; i <= 102; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
