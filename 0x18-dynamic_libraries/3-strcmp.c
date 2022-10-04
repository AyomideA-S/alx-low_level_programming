#include "main.h"

/**
 * _strcmp - Compares 2 given strings
 * @s1: String to be compared
 * @s2: String to compare against
 * Return: Positive number if s1 is greater than s2
 * Negative number if s1 is less than s2
 * Else 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
