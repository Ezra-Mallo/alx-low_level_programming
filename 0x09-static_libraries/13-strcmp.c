#include <string.h>
#include "main.h"

/**
 * *_strcmp - a function that copies the string pointed
 *	to by src, including the terminating null byte (\0),
 *	to the buffer pointed to by dest.
 * @s1: First parameter is the pointer for the destination
 * @s2: Second parameter is the pointer to the source
 *
 * Return: Character pointer
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);

	return (result);
}
