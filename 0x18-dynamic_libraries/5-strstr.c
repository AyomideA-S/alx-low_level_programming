#include "main.h"

/**
 * _strstr - Returns a substring in a string
 * @haystack: Array of characters
 * @needle: Substring
 * Return: Pointer to first occurence of substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *i;
	char *j;

	while (*haystack != '\0')
	{
		i = haystack;
		j = needle;

		while (*haystack != '\0' && *j != '\0' && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (!*j)
			return (i);
		haystack = i + 1;
	}
	return (0);
}
