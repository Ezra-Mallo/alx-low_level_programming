#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup -  Write a function that returns a pointer to a newly allocated
 *            space in memory, which contains a copy of the string given
 *            as a parameter
 * @str: char
 * Return: Character pointer
 */
char *_strdup(char *str)
{
	int i = 0;
	char *a = malloc(sizeof(*str));
	char *ptr;


	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		a[i] = str[i];
		i++;
	}

	ptr = a;

/*	free(str);*/
	return (ptr);
}
