#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: String to be printed
 * @f: Pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
