#include "main.h"
#include <stdio.h>
/**
 * cap_string - function that capitalizes all words of a string.
 * @a: First parameter is the pointer for the destination
 *
 * Return: returns a pointer
 */
char *cap_string(char *a)
{
	int k;
	int nul1, nul2;

	nul1 = ' ';
	k = 0;

	while (nul1 != '\0')
	{
		nul1 = a[k];
		if (nul1 == 9 || nul1 == 10 || nul1 == 32)
		{
			nul2 = a[k + 1];
			if (nul2 >= 97 && nul2 <= 122)
			{
				nul2 = nul2 - 32;
				a[k + 1] = nul2;
			}
		}

		k++;
	}
	return (a);
}
