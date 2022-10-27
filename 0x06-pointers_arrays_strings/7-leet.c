#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337
 *	Letters a & A replaced by 4, Letters e & E replaced by 3
 *	Letters o & O replaced by 0, Letters t & replaced by 7
 *	Letters l & L should be replaced by 1
 * @a: First parameter is the pointer for the destination
 *
 * Return: returns a pointer
 */
char *leet(char *a)
{
	int i, j;
	char data1[] = "aAeEoOtTlL";
	char data2[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == data1[j])
			{
				a[i] = data2[j];
			}
		}
	}
	return (a);
}
