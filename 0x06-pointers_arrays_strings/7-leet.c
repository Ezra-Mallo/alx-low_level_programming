#include "main.h"
#include <stdio.h>
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
	int k;
	int nul;

	nul = ' ';
	k = 0;

	while (nul != '\0')
	{
		nul = a[k];
		switch (nul)
		{
		case 65:
		case 97:
			a[k] = '4' + 0;
			break;
		case 69:
		case 101:
			a[k] = '3' + 0;
			break;
		case 79:
		case 111:
			a[k] = '0' + 0;
			break;
		case 84:
		case 116:
			a[k] = '7' + 0;
			break;
		case 76:
		case 108:
			a[k] = '1' + 0;
			break;
		}
		k++;
	}
	return (a);
}
