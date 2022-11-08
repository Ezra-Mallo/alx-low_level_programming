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
	int b = size * sizeof(c);

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(c));

	for (i = 0; i < b; i++)
		a[i] = c;
	a[b] = '\0';

	if (a == NULL)
		return (NULL);
	else
		return (a);
}
