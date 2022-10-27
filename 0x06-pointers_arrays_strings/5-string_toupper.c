#include "main.h"
#include <stdio.h>
/**
 * string_toupper - function that changes all lowercase letters of a string
 *                   to uppercase.
 * @a: First parameter is the pointer for the destination
 *
 * Return: returns a pointer
 */
char *string_toupper(char *a)
{
	int k;
	int nul;

	nul = ' ';
	k = 0;

	while (nul != '\0')
	{
		nul = a[k];
		if (nul >= 97 && nul <= 122)
		{
			nul = nul - 32;
			a[k] = nul;
		}

		k++;
	}
	return (a);
}
