#include <stdio.h>

/**
 * main - function to compute the sum of multiple of n
 * @void: first parameter
 *
 * Description: computes the multople od 3 and 5
 * Return: returns 0
 */
int main(void)
{
	int result;
	int i;

	result = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			result = result + i;
	}
	printf("%d\n", result);
	return (0);
}
