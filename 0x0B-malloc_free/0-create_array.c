#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - Creates an array of given size filled with given character
* @size: Size of array
* @c: Character
* Return: Array
*/
char *create_array(unsigned int size, char c)
{
	char *buffer;
	int i = size;

	if (size < 1)
		return (NULL);
	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
		return (NULL);
	while (i)
	{
		i--;
		buffer[i] = c;
	}
	return (buffer);
}
