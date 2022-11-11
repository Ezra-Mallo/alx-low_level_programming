#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: element the dynamic mem
 * @old_size: Old size of the dynamic memory
 * @new_size: New size of the dynamic memory
 * Return: void value
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(old_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		ptr = realloc(ptr, (new_size));
	ptr = realloc(ptr, (new_size));

	free(ptr);
	return (ptr);
}
