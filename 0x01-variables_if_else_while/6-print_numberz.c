#include <stdio.h>

/**
 * main - Entry point
 * This program prints every ASCII decimal digit
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
