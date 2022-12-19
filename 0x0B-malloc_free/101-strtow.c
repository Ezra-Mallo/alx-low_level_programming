#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * strtow - Prints an array of string
 * @str: First parameter
 * Return: character
 */
char **strtow(char *str)
{
	char *ptr, **ptr2;
	int i, j, flag;
	char a, b;

	if (str == NULL || str == 0)

		return (NULL);
	ptr = malloc((strlen(str) + 1) * sizeof(char));

	i = 0, j = 0, flag = 0;
	while (str[i] != '\0')
	{
		a = str[i];
		b = str[i + 1];
		if ((a != 32 && b != 32) || (a != 32 && b == 32))
		{
			ptr[j] = str[i];
			flag = 1;
			j++;
			i++;
		}
		else if (a == 32 && b != 32 && flag != 0)
		{
			ptr[j] = '\n';
			flag = 1;
			j++;
			i++;
		}
		else
			i++;
	}
	ptr[j] = '\0';
	ptr2 = &ptr;
	return (ptr2);
}

