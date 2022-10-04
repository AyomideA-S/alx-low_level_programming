#include "main.h"

/**
 * _abs - Returns the absolute
 * value of a number
 *
 * @n: Number to be checked
 *
 * Return: absolute value of n 0
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
