#include "main.h"

/**
 * cap_string - Changes all words to title case
 * @c: Array of characters
 *
 * Return: Titled String
 */
char *cap_string(char *c)
{
	int i, flag;
	char *ptr, delimiters[] = {' ', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	ptr = c;
	if (*c >= 97 && *c <= 122)
		*c -= 32;
	c++;
	flag = 0;
	while (*c)
	{
		if ((*c > 47 && *c < 58) || (*c > 64 && *c < 91))
			flag = 0;
		else if (*c >= 97 && *c <= 122 && flag)
		{
			flag = 0;
			*c -= 32;
		}
		else if (*c < 32)
			flag = 1;
		else
		{
			for (i = 0; i < 11; i++)
			{
				if (delimiters[i] == *c)
				{
					flag = 1;
				}
			}
		}
		c++;
	}
	return (ptr);
}
