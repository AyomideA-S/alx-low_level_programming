#include "main.h"

/**
 * _memset - Fills a buffer with a constant byte
 * @s: Memory area
 * @b: Byte
 * @n: Number of bytes
 * Return: Pointer to memort address
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		*(s + n) =  b;
	return (s);
}
