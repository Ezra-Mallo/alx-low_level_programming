#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Write a function that searches for an integer
 * @array: First parameter
 * @size: Second parameter
 * @cmp: Third parameter
 * Return: returns an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0) /* test true i.e != 0  */
		{
			return (i);
			break;
		}
	}
	return (-1);
}
