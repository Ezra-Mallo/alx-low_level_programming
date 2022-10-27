#include "main.h"
#include <string.h>

/**
 * *_strncat - Write a function that concatenates two strings.
 * @dest: First parameter is the destination
 * @src: Second parameter is the source
 * @n: Third parameter is the number of characters to write
 * Return: a the destination values to the call program
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
