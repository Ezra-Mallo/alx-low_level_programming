#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat -  Write a function that concatenates two strings
 * @s1: first parameter
 * @s2: second parameter
 * Return: Character pointer
 */
char *str_concat(char *s1, char *s2)
{
	int sl1, sl2, size;
	int i = 0, j = 0;
	char *ptr;

	sl1 = strlen(s1);
	sl2 = strlen(s2);
	size = sl1 + sl2 + 1;

	ptr = malloc(size * sizeof(char));

	if (ptr != NULL)
	{
		for (i = 0; i < sl1; i++)
			ptr[i] = s1[i];

		for (j = 0; j < sl2; j++)
			ptr[sl1 + j] = s2[j];
	}
	else
		return (NULL);
	return (ptr);
}
