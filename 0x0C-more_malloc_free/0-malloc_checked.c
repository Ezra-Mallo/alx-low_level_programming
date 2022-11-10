#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size of the dynamic memoryi
 * Return: void value
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	/*ptr = &b;*/

	if (ptr == NULL)
		return ((unsigned int *) 98);

	return (ptr);
}
