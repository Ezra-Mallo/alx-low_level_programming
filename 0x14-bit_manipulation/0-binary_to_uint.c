#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - Write a function that converts a binary number
 *                  to an unsigned int
 * @b: is the parameter to be converted
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, k, j, result = 0, bit, power;

	if (b == NULL)
		return (0);

	i =  0;

	j = strlen(b) - 1;

	while (b[i] != '\0')
	{
		if (b[i] == '0')
			bit = 0;
		else if (b[i] == '1')
			bit = 1;
		else
		{
			return (0);
		}

		power = 1;
		for (k = 0; k < j; k++)
			power = power * 2;
		result += power * bit;
		i++;
		j--;
	}
	return (result);
}
