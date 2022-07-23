#include "main.h"

/**
 * _strcat - Concatenates 2 given strings
 * @dest: Destination variable
 * @src: String to be added
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest;
	while (*dest != 0)
		dest++;
	while (*src != 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (ptr);
}
