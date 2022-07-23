#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* reduce - Break the value into smaller cents
* @i: Value
* Return: Number of coins
*/
int reduce(long int i)
{
	int min = 0;

	while (i)
	{
		if (i >= 25)
		{
			i -= 25;
			min++;
		}
		else if (i >= 10)
		{
			i -= 10;
			min++;
		}
		else if (i >= 5)
		{
			i -= 5;
			min++;
		}
		else if (i >= 2)
		{
			i -= 2;
			min++;
		}
		else if (i >= 1)
		{
			i -= 1;
			min++;
		}
	}
	return (min);
}

/**
* main - Entry point
* @argc: Argument Count
* @argv: Argument Vector
* Return: Returns the minimum of coins in cents else 1
*/
int main(int argc, char *argv[])
{
	long int i;
	int min;

	if (argc == 2)
	{
		i = atoi(argv[1]);
		if (i <= 0)
		{
			printf("0\n");
		}
		else
		{
			min = reduce(i);
			printf("%d\n", min);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
