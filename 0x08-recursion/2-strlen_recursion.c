#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string
 * @s: First parameter
 * Return: a value is returned
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = (i + 1) + _strlen_recursion(s + 1);
	}

	return (i);
}
