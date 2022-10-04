#include "main.h"

/**
 * _isupper - Checks if c is an uppercase letter
 * @c: ASCII value to be evaluated
 * Return: 1 if uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
