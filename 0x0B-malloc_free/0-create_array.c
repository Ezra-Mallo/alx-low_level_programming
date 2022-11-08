#include "main.h"
#include <stdlib.h>

/**
 * create_array -  a function that creates an array of chars, and
 *                 initializes it with a specific char.
 * @size: size of the dynamic memory
 * @c: data type
 *
 * Return: Character pointer
 */
char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *a;
	int b = size;

	if (b <= 0)
		return (NULL);
	a = malloc(size * sizeof(c));

	if (a != NULL)
	{
		for (i = 0; i < b; i++)
			a[i] = c;
	}
	else
		return (NULL);
	return (a);
}
