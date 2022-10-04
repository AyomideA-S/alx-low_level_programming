#include "main.h"

/**
 * _strncpy - Copies a given string to a variable
 * @dest: Destination variable
 * @src: String to be copied
 * @n: Number of bytes to be copied
 * Return: Copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;
	int i;

	ptr = dest;
	for (i = 0; i < n; i++)
	{
		if (*src != 0)
		{
			*dest = *src;
			src++;
		}
		else
		{
			*dest = '\0';
		}
		dest++;
	}
	return (ptr);
}
