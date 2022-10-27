#include "main.h"

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
	j = _strlen(src) + 1;
	
	l = 0;
	for (k = i; k <= (i + j); k++)
	{
		if ((*(src + l)) != '\0')
			dest[k] = *(src + l);
		else if ((*(src + l)) != '\n')
			dest[k] = '\n';
		else if ((*(src + l)) == '\0')
			dest[k] = '\0';

		l++;
	}
	return (dest);
}
