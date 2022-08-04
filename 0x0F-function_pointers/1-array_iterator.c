#include "function_pointers.h"

/**
 * array_iterator - Iterates through every element of an array by calling
 * a function
 * @array: Array of integers
 * @size: Size of array
 * @action: Pointer to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
