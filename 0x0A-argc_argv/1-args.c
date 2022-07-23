#include <stdio.h>
#include "main.h"

/**
* main - Entry point
* @argc: Argument Count
* @argv: Argument Vector
* Return: 0 (Success)
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		(*argv)++;
	printf("%d\n", i - 1);
	return (0);
}
