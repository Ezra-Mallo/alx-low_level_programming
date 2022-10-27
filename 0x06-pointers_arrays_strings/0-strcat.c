#include "main.h"
#include <stdio.h>   /* just for a check*/

/**
 * *_strcat - a function that concatenates two strings.
 * @dest: First parameter is the destination pointer
 * @src: Second parameter is the source pointer
 * Return: returns & assigns the value of destination pointer to the call
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k, l;

	i = _strlen(dest);
	j = _strlen(src);

/*	printf("%d, %d\n", i, j);   just for a check*/

	l = 0;
	for (k = i; k <= (i + j + 1); k++)
	{
		if ((*(src + l)) != '\0')
			dest[k] = *(src + l);
		else
		{
			dest[k] = '\n';
			dest[k] = '\0';
			break;
		}
		l++;
	}
	return (dest);
}
