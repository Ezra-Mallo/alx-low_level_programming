#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: first parameer. a char data type
 */
void puts_half(char *str)
{
	int count, count2;
	char null_char;
	int i;

	null_char = 'x';
	count = 0;

	while (null_char != '\0')
	{
		null_char = *(str + count);
		count = count + 1;
	}
	count -= 2;
	count2 = count / 2  + 1;

	for (i = count2; i <= count; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
