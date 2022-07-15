#include "main.h"

/**
* rot13 - Function that encodes text in ROT-13
* @p: Plain text
* Return: Cipher text
*/
char *rot13(char *p)
{
	int i, j;
	char text[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cipher[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char flag;

	for (i = 0; *(p + i) != 0; i++)
	{
		flag = 0;
		for (j = 0; text[j] != 0 && flag == 0; j++)
		{
			if (*(p + i) == text[j])
			{
				*(p + i) = cipher[j];
				flag = 1;
			}
		}
	}
	return (p);
}
