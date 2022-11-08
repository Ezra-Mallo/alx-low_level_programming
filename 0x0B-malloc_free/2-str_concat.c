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
	int sL1 = strlen(s1);
	int sL2 = strlen(s2);
	int size = sL1 + sL2 + 1;
	int i, j;
	char *ptr = malloc(size * sizeof(char));

	printf("YES\n");
	if (s1 == NULL || s2 == NULL)
	{
		printf("Null\n");
		return (NULL);
	}

	for (i = 0; i < sL1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < sL2; j++)
		ptr[sL1 + j] = s2[j];

	return (ptr);
}
