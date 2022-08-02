#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory block of dog
 * @d: Struct of type dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
