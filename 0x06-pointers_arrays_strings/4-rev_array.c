#include "main.h"

/**
 * reverse_array - Reverses an array
 * @a: Array of integers
 * @n: Length of array
 */
void reverse_array(int *a, int n)
{
	int temp, i, half;

	half = n / 2;
	for (i = 0; i < half; i++)
	{
		n--;
		temp = *(a + i);
		a[i] = a[n];
		a[n] = temp;
	}
}
