#include "search_algos.h"

/**
 * linear_search - searches for value in array of int using Linear  algorithm
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 *
 * Return: 1 where value is located or -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t count = 0;

	while (array != NULL && count < size)
	{
		printf("Value checked array[%ld] = [%d]\n", count,
				array[count]);
		if (array[count] == value)
			return (count);
		count++;
	}
	return (-1);
}
