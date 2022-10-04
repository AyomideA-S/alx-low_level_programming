#include "main.h"

/**
 * _isdigit - Checks if c is an ASCII digit
 * @c: ASCII value to be evaluated
 * Return: 1 if uppercase else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
