#include "function_pointers.h"

/**
 * array_iterator - Write a function that prints a name
 * @array: First parameter
 * @size: Second parameter
 * @action: Third parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, s;

	s = (int) size;
	if (s != 0 && action != NULL && array != NULL)
	{
		for (i = 0; i < s; i++)
			action(array[i]);
	}
}
