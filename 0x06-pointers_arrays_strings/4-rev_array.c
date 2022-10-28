#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Write a function that reverses the content of an
 *                 array of integers
 * @a: First parameter is the pointer for the destination
 * @n: Second parameter is the pointer to the source
 *
 * Return: Character pointer
 */
void reverse_array(int *a, int n)
{
	int *num, tmp1, tmp2;
	int i, count = n - 1;

	num1 = a;
	for (i = 0; i < (n - i); i++)
	{
		tmp1 = num[i];
		tmp2 = a[count];
		a[count] = tmp1;
		num[i] = tmp2;
		count = count - 1;
	}

	/*for (k = 0; k <= (n -1); k++)*/
		/*printf("%d\t%d\t%d\t%d\n", k, a[k], num[k]);*/
}
