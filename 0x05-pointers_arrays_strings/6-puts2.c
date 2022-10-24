#include "main.h"

/**
 * puts2 -  a function that prints every other character of a string,
 *          starting with the first character, followed by a new line.
 * @str: first parameer. a char data type
 */
void puts2(char *str)
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

	for (i = 0; i < count; i += 2)
		_putchar(*(str + i));
	_putchar('\n');

}
