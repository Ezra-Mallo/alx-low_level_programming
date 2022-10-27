#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - a function that copies the string pointed
 *	to by src, including the terminating null byte (\0),
 *	to the buffer pointed to by dest.
 * @dest: First parameter is the pointer for the destination
 * @src: Second parameter is the pointer to the source
 * @n: Third parameter is an int 
 *
 * Return: Character pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
