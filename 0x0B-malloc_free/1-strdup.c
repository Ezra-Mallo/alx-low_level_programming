#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup -  Write a function that returns a pointer to a newly allocated
 *            space in memory, which contains a copy of the string given
 *            as a parameter
 * @str: char
 * Return: Character pointer
 */
char *_strdup(char *str)
{
	int size = 1;
	char *ptr;
	int i = 0;

	if (str == NULL)
		return (NULL);


	size =  size + strlen(str);
	ptr = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	ptr[size - 1] = '\0';
	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
