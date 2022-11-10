#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - a function that allocates memory for an array, using calloc.
 * @nmemb: element the dynamic memory
 * @size: size of the dynamic memory
 * Return: void value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = (void *)calloc(size, nmemb);

	if (ptr == NULL)
		return ((void *)98);

	return (ptr);
}
