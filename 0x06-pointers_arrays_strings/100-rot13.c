#include <stdio.h>
#include "main.h"

/**
 * *rot13 -  Write a function that encodes a string using rot13
 * @s: The digit to print
 * Return: a pointer value
 */
char *rot13(char *s)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
