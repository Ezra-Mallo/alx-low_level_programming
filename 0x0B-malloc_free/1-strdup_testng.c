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
	char *ptr = (char *)malloc(strlen(str) * sizeof(*str));
	int i = 0;

	if (str == NULL)
		return (NULL);

	printf("%ld\n", strlen(str));
	printf("%ld\n", strlen(ptr));
	printf("%p\n", str);
	printf("%p\n", ptr);

/*	ptr = stir;*/
	while (str[i] != '\0')
	{
		printf("%c ", *(ptr + i));
		ptr[i] = str[i];
		i++;
	}

	printf("\n%ld\n", strlen(ptr));

	i = 0;
	while (str[i] != '\0')
	{
		printf("%c ", *(str + i));
		i++;
	}
	printf("\n%ld\n", sizeof(*str));

	return (ptr);
}
