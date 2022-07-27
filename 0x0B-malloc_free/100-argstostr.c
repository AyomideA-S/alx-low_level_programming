#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all given arguments of a program
 * @ac: Argument Count
 * @av: Argument Vector
 *
 * Return: Pointer to an array of characters
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != 0; j++)
			c++;
		c++;
	}

	aout = malloc((c + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == 0)
		{
			aout[ia] = 10;
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			aout[ia] = av[i][j];
	}
	aout[ia] = 0;

	return (aout);
}
