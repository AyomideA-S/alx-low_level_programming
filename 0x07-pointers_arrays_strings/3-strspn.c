#include "main.h"

/**
 * _strspn - Returns the length of a substring
 * @s: Array of characters
 * @accept: Characters in substring
 * Return: Number of bytes in initial segment
 * from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int length = 0, flag, i;

	while (*s != 0)
	{
		i = 0;
		flag = 0;
		while (*(accept + i) != 0 && flag == 0)
		{
			if (*s == *(accept + i))
			{
				length++;
				flag = 1;
				break;
			}
			i++;
		}
		if (flag == 0)
			return (length);
		s++;
	}
	return (0);
}
