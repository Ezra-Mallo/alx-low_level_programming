#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: first parameer. a char data type
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
	count -= 1;

	for (i = 0; i < count; i++)
		_putchar(*(str + i));
	_putchar('\n');

}
