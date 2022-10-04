#include "main.h"

/**
 * _strpbrk - Returns the first occurence of a substring
 * @s: Array of characters
 * @accept: Characters in substring
 * Return: Number of bytes in initial segment from accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != 0)
	{
		i = 0;
		while (*(accept + i) != 0)
		{
			if (*s == *(accept + i))
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (0);
}
