#include "main.h"

/**
* leet - Function that encodes a string in 1337.
* @s: Array of characters
* Return: Encoded string
*/

char *leet(char *s)
{
	int i, j;
	char alpha[] = "aAeEoOtTlL";
	char leet[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
			if (s[i] == alpha[j])
			{
				s[i] = leet[j / 2];
			}
	}
	return (s);
}
