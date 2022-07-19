#include "main.h"

/**
 * set_string - Sets the value of a pointer to a given char
 * @s: Source memory address
 * @to: Target memory address
 */
void set_string(char **s, char *to)
{
	*s = to;
}
