#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: Amount of bytes
 * Return: Pointer to the allocated memory else 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
