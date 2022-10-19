#include "main.h"

/**
 * my_multiples - function to compute the sum of multiple of n
 * @n: first parameter
 *
 * Description: computes the multople od 3 and 5
 * Return: the result of the summing of themultiple is returned
 */
int my_multiples(int n)
{
	int result;
	int i;

	result = 0;

	for (i = 1; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			result = result + i;
		}
	}

	return (result);
}
