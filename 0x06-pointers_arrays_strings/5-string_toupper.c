#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * to their uppercase ASCII equivalents
 * @c: Array of characters
 *
 * Return: CAPITALIZED string
 */
char *string_toupper(char *c)
{
	char *ptr;

	ptr = c;
	while (*c)
	{
		if (*c >= 97 && *c <= 122)
			*c -= 32;
		c++;
	}
	return (ptr);
}
