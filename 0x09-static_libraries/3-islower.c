#include "main.h"

/**
 * _islower - Check if a character
 * is in lowercase or not
 *
 * @c: ASCII value of the character
 * to be checked
 *
 * Return: 1 if lowercase else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
