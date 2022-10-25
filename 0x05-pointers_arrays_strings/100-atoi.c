#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: first parameer. a char data type
 * Return : returns and interger data type
 */
int _atoi(char *s)
{
	int count;
	char null_char;
	int i, j;
	int sum, m, tens;

	null_char = 'x';
	count = 0;

	while (null_char != '\0')
	{
		null_char = *(s + count);
		count = count + 1;
	}
	count -= 2;
	sum = 0;

	for (i = 0; i < count; i++)
	{
		tens =  *(s + i);
		m = count - i;

		for (j = m; j > 0; j++)
			tens *= 10;
		sum = sum + tens;
	}
	return (sum);
}
