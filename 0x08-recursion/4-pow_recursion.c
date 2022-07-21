#include "main.h"

/**
 * _pow_recursion - Returns the yth exponent of an integer x
 * @x: An integer
 * @y: Exponent integer
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
		return (1);
	else
		return (-1);
}
