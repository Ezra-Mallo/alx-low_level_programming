#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Write a function that prints the sum of the two
 *                  diagonals of a square matrix of integers.
 * @a: First parameter is a pointer
 * @size: Second parameter si sthe size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int new_size = size * size;
	int sum1 = 0;
	int sum2 = 0;
	int incr1 = size + 1; /* index will increment by size + 1 */
	int incr2 = size - 1; /* index starts from zero hence the -1*/

	for (i = 0; i < new_size; i += incr1)
	{
		sum1 = sum1 + a[i];
	}
	for (i = incr2; i < new_size - incr2; i += incr2)
	{
		sum2 = sum2 + a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
