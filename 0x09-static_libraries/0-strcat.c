#include "main.h"
#include <string.h>

/**
 * *_strcat - a function that concatenates two strings.
 * @dest: First parameter is the destination pointer
 * @src: Second parameter is the source pointer
 * Return: returns & assigns the value of destination pointer to the call
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
