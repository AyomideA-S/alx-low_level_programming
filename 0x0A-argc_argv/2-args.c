#include <stdio.h>
#include "main.h"

/**
* main - Entry point
* @argc: Argument Count
* @argv: Argument Vector
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc)
	{
		argc--;
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
