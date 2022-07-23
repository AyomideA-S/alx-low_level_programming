#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
* main - Entry point
* @argc: Argument Count
* @argv: Argument Vector
* Return: Sum of given integers else 1
*/
int main(int argc, char *argv[])
{
	int sum = 0, i;
	char *c;

	if (argc > 1)
	{
		i = 1;
		for (i = 1; i < argc; i++)
		{
			c = argv[i];
			while (*c)
			{
				if (!isdigit(*c))
				{
					printf("Error\n");
					return (1);
				}
				c++;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
	{
		printf("%d\n", 0);
	}
	return (0);
}
