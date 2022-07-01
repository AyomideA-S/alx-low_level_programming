#include <stdio.h>

/**
 * main - Entry point
 * This program prints every letter of the alphabet
 * in reverse order
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
