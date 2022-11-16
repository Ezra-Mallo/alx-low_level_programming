#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Write a function that searches for an integer
 * @array: First parameter
 * @size: Second parameter
 * @cmp: Third parameter
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0)
		return (-1);

	printf("%d", cmp);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 98)
		{
			result = i;
			printf("%d, %d\n", cmp(array[i]),  result);
			break;
		}
		else if (cmp(array[i]) == -98)
		{
			result = i;
			printf("%d, %d\n", cmp(array[i]),  result);
			break;
		}
		else if (cmp(array[i]) > 0)
		{
			result = i;
			printf("%d, %d\n", cmp(array[i]),  result);
			break;
		}
		else
		{
			result = -1;
			printf("%d, %d\n", cmp(array[i]),  result);
			break;
		}
	}
	return (result);
}
