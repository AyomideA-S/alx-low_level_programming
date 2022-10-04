#include "main.h"

/**
 * _strncat - Concatenates 2 given strings
 * @dest: Destination string
 * @src: String to be added
 * @n: Number of bytes to be added
 * Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr;
	int i;

	ptr = dest;
	while (*dest != 0)
		dest++;
	for (i = 0; i < n; i++)
	{
		if (*src != 0)
		{
			*dest = *src;
			src++;
			dest++;
		}
		else
		{
			*dest = '\0';
			break;
		}
	}
	return (ptr);
}
