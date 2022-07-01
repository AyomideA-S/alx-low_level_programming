#include <stdio.h>

/**
 * main - Entry point
 * Prints a string to the stderr
 * Return: 1 (Error)
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			stderr);
	return (1);
}
