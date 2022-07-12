#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Array of characters
 */
void rev_string(char *s)
{
	int i, j, len;
	char tmp;

	i = 0;
	j = 0;
	while (*(s + i) != 0)
		i++;
	len = i;
	for (i = i - 1; i >= (len / 2); i--)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++;
	}
}
