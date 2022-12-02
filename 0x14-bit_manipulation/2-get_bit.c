#include "main.h"
#include <stdio.h>

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: is the parameter for the decimal number to be converted to binary
 * @index: 2nd parameter
 * Return: int value of the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int val_div, j;
	int remender, i, k;
	unsigned int dest[50], my_return_val;

	if (n == 0)
	{
		dest[0] = 0;
		i = 1;
	}
	else
	{
		val_div = 1;
		i = 0;

		while (val_div != 0)
		{
			remender = n % 2;
			val_div = n / 2;
			dest[i] = remender;
			n = val_div;
			i++;
		}
	}

	j = 0;
	for (k = 0; k < i ; k++)
	{
		if (j == index)
		{
			my_return_val = dest[k];
			break;
		}
		j++;
	}
	return (my_return_val);
}
