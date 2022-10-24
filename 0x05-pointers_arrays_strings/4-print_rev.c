#include "main.h"

/**
 * print_rev - a function that returns the length of a string
 * @s: first parameer. a char data type
 */
void print_rev(char *s)
{
	int count;
	char null_char;
	int i;

	null_char = 'x';
	count = 0;

	while (null_char != '\0')
	{
		null_char = *(s + count);
		count = count + 1;
	}
	count = count -1;

	for (i = count; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');

}
