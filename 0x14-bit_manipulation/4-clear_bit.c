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
	unsigned long int val_div, i, val_of_n;
	int power, j, k;

	val_of_n = *n;

	if (n == 0 && index == 0)
		return (-1);
	val_div = 1;
	i = 0;

	while (val_div != 0)
	{
		val_div = val_of_n / 2;

		if (i == index)
		{
			k = i;
		}
		val_of_n = val_div;
		i++;
	}
	val_of_n = *n;

	power = 1;
	for (j = 0; j < k; j++)
		power = power * 2;
	*n = power + val_of_n;

	return (*n);
}
