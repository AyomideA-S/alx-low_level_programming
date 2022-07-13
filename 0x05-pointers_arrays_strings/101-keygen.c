#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Key generator
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int random, iteration, max;

	srand(time(NULL));
	for (iteration = 0, max = 2772; max > 122; iteration++)
	{
		random = (rand() % 125) + 1;
		printf("%c", random);
		max -= random;
	}
	printf("%c", max);

	return (0);
}
