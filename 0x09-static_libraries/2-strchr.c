#include "main.h"

/**
 * _strchr - Locates the first occurence of
 * a character in a string
 * @s: Array of characters
 * @c: Character
 * Return: Pointer to first occurrence of character c
 */
char *_strchr(char *s, char c)
{
	while (*s != 0)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
