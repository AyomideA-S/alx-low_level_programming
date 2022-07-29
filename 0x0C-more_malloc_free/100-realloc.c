#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a block of memory
 * @ptr: Pointer to previously allocated memory
 * @old_size: Size, in bytes, of the allocated space of ptr
 * @new_size: New byte size of the new memory block
 * Return: ptr else NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
