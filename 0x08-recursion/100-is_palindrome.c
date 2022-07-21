#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: Array of characters
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - Compares characters of a string
 * @s: Array of strings
 * @n1: Min iteration
 * @n2: Max iteration
 * Return: 1 if equal else 0
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Array of characters
 * Return: 1 if s is a palindrome else 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
