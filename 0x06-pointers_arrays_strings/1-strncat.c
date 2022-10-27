#include "main.h"
#include <stdio.h>

/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: First parameter is the destination
 * @src: Second parameter is the source
 * @n: Third parameter is the number of characters to write
 * Return: a the destination values to the call program
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k, l;

	i = _strlen(dest);
	l = 0;

	for (k = i; k < (i + n); k++)
	{
		if ((*(src + l)) != '\0')
			dest[k] = *(src + l);
		else
			break;
		l++;
	}

	return (dest);
}
