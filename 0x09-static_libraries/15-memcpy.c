#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @dest: First parameter
 * @src: Second parameter
 * @n: Third parameter
 * Return: pointer
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
