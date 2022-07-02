#include <stdio.h>

/**
 * main - Entry point
 * This program prints comma-separated
 * combined digits
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 56; i++)
	{
		for (j = i + 1; j < 57; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55)
				{
					putchar(44);
					putchar(32);
				}
				else
				{
					putchar(10);
				}
			}
		}
	}
	return (0);
}
