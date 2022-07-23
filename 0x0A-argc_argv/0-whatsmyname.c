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
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
