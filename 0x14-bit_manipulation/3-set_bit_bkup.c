#include "main.h"
#include <stdio.h>

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: is the parameter for the decimal number to be converted to binary
 * @index: 2nd parameter
 * Return: int value of the index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val_div, i, result, val_of_n;
	int remender, bit, power, j, k;
	int dest[50];

	val_of_n = *n;

	if (n == 0 && index == 0)
	{
		dest[0] = 0;
		i = 1;
		return (-1);
	}
	else
	{
		val_div = 1;
		i = 0;

		while (val_div != 0)
		{
			remender = val_of_n % 2;
			val_div = val_of_n / 2;

			if (i == index)
			{
				dest[i] = 1;
				printf("%ld\n", i);
			}
			else
				dest[i] = remender;
			val_of_n = val_div;
			i++;
		}
	}
	result = 0;

	for (k = i - 1; k >= 0; k--)
	{
		bit = dest[k];
		printf("%d   %d\n", k,  dest[k]);
		power = 1;
		for (j = 0; j < k; j++)
			power = power * 2;
		result += power * bit;
	}
	printf("\n\n");

	return (result);
}
