#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size of the dynamic memory
 */
void *malloc_checked(unsigned int b)
{	
	void *ptr;

	ptr = malloc(b * sizeof(unsigned int));
	/*ptr = &b;*/

	if (ptr == NULL)
		return ((unsigned int*) 98);

	return (ptr);
}
