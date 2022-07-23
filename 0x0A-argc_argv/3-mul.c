#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Entry point
* @argc: Argument Count
* @argv: Argument Vector
* Return: Product of 2 given integers else 1
*/
int main(int argc, char *argv[])
{
	unsigned long int product;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%ld\n", product);
		return (0);
	}
	printf("Error\n");
	return (1);
}
