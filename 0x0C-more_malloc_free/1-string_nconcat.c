#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Write a function that concatenates two strings
 * @s1: First string for concatination
 * @s2: Second string for concatination
 * @n: The number of charaters to concatinate
 * Return: pointer of char type
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int l1 = 0, l2 = 0, size, i, j;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	size = l1 + l2 + 1;

	ptr = malloc(size);

	if (ptr == NULL)
		return (NULL);

	if (l1 > 0)
	{
		for (i = 0; i < l1; i++)
			ptr[i] = s1[i];
	}

	if (n > 0)
	{
		if (n <= l2)
		{
			for (j = 0; j < n; j++)
				ptr[l1 + j] = s2[j];
		}
		else
		{
			for (j = 0; j < l2; j++)
				ptr[l1 + j] = s2[j];
		}
	}
	return (ptr);
}
