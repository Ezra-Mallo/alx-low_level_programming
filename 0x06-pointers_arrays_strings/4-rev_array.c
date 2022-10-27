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
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
