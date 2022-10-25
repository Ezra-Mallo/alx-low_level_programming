#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - Write a function that copies the string pointed
 *	to by src, including the terminating null byte (\0),
 *	to the buffer pointed to by dest.
 * @dest: First parameter is the pointer for the destination
 * @src: Second parameter is the pointer to the source
 *
 * Return: Character pointer
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int i;
	char nul = ' ';

	while (nul != '\0')
	{
		nul = *(src + k);
		k++;
	}
	for (i = 0; i < k ; i++)
		dest[i] = src[i];

	return (dest);
}
