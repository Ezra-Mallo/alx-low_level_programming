#include "main.h"

/**
 * print_binary - Write a function that converts a binary number
 *                  to an unsigned int
 * @n: is the parameter for the decimal number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int val_div;
	int remender, i, k;
	int dest[50];


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
	for (k = i - 1; k >= 0 ; k--)
		_putchar(dest[k] + '0');
}
