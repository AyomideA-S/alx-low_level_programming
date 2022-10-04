#include "main.h"

/**
 * _memcpy - Copies memory
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes to be copied
 * Return: Pointer to destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
		*(dest + n) =  *(src + n);
	return (dest);
}
