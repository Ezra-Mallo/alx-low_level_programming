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
	int k;
	int nul;

	nul = ' ';
	k = 0;

	while (nul != '\0')
	{
		nul = a[k];
		if (nul == 65 || nul == 97)
			a[k] = '4' + 0;

		else if (nul == 69 || nul == 101)
			a[k] = '3' + 0;
		
		else if (nul == 79 || nul == 111)
			a[k] = '0' + 0;
		
		else if (nul == 84 || nul == 116)
			a[k] = '7' + 0;
		
		else if (nul == 76 || nul == 108)
			a[k] = '1' + 0;
		
		k++;
	}
	return (a);
}
