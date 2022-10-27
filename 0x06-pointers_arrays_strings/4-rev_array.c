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
	int *num;
	int i, k;

	num = a;

	for (i = 0; i < n; i++)
	{
/*		num[i] = a[i];i*/
		printf("%d\t%d\t%d\n", i, a[i], num[i]);

	}

	printf("\n\n");
	k = 0;
	for (i = n-1; i > 0; i--)
	{
		printf("%d\t%d\t%d\n", k, i, num[i]);
		a[k] = num[i];
		k++;
	}

	printf("\n\n");
	for (i = 0 ; i < n; i++)
		printf("%d, ", a[i]);
}
