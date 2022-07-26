#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - Duplicates an array of characters
* @str: Array of characters
* Return: Duplicate of str
*/
char *_strdup(char *str)
{
	char *duplicate, *string;
	int len = 0;

	if (str == NULL)
		return (NULL);
	string = str;
	while (*string)
	{
		string++;
		len++;
	}
	duplicate = (char *)malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);
	while (len)
	{
		len--;
		duplicate[len] = str[len];
	}
	return (duplicate);
}

