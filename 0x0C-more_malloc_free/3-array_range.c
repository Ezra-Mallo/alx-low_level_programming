#include "main.h"
#include <stdlib.h>

/**
 * array_range - Write a function that creates an array of integers
 * @min: element the dynamic memory
 * @max: size of the dynamic memory
 * Return: void value
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	ptr = malloc(max  * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	if (min > max)
		return (NULL);

	if (ptr != NULL)
	{
		for (i = min; i <= max; i++)
			ptr[i] = i;
	}
	else
		return (NULL);

	return (ptr);
}
