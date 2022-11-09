#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: first parameer. a char data type
 * Return: return an integer value
 **/
int _strlen(char *s)
{
	int count;
	char null_char;

	null_char = ' ';
	count = 0;

	while (null_char != '\0')
	{
		null_char = *(s + count);
		count = count + 1;
	}
	return (count - 1);
}
