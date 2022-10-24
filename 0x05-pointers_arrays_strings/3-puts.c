#include "main.h"

/**
 * _puts - a function that returns the length of a string
 * @str: first parameer. a char data type
 * Return: return an integer value
 */
void _puts(char *str)
{
	int count;
	char null_char;
	int i;

	null_char = 'x';
	count = 0;

	while (null_char != '\0')
	{
		null_char = *(str + count);
		count = count + 1;
	}

	for (i = 0; i < count-1; i++)
		_putchar(*(str + i));
	_putchar('\n');

}
