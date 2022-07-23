#include "main.h"

/**
 * _strcpy- Copies a string from one
 * memory address to another
 * @dest: Variable to store copied string
 * @src: String to be copied
 * Return: A pointer to the new string
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr;

	if (dest == 0)
		return (0);
	ptr = dest;
	while (*src != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
