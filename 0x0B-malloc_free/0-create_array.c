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
	char *a = malloc(size * sizeof(c));
	int b = size * sizeof(c) + 1;

	if (size == 0)
		return (NULL);

	for (i = 0; i < b; i++)
		a[i] = c;
	a[b - 1] = '\0';

	return (a);
}
