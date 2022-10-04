#include "main.h"

/**
 * _isalpha - Check if a character
 * is a letter of the alphabet or not
 *
 * @c: ASCII value of the character
 * to be checked
 *
 * Return: 1 if alphabet else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
