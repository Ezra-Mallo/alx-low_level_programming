#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  Write a function that returns a pointer to a newly allocated
 *            space in memory, which contains a copy of the string given
 *            as a parameter
 * @str: char
 * Return: Character pointer
 */
char *_strdup(char *str)
{
	int i;
	char *a = malloc(sizeof(str));
	char b = sizeof(str);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < b; i++)
		a[i] = str[i];

/*	free(str);*/
	return (a);
}
