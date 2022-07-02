#include <stdio.h>

/**
* main - Entry point
* This program prints comma-separated
* combined digits and numbers
* Return: 0 (Success)
*/
int main(void)
{
	int i;
	int j;
	int counter1;
	int k;
	int l;
	int counter2;

	counter1 = 0;
	for (i = 48; i < 58; i++)
	{
		if (counter1 == 99)
		break;
		for (j = 48; j < 58; j++)
		{
			counter2 = counter1 + 1;
			counter1++;
			for (k = (counter2 / 10) + 48; k <= 57; k++)
			{
				for (l = (counter2 % 10) + 48; l <= 57; l++)
				{
					counter2++;
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if (counter1 != 99)
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
	}
	return (0);
}
