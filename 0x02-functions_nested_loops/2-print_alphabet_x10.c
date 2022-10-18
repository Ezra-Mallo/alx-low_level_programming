#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - makes a call to _putchar to print alphabets for 10 times
 * @void: no parameter passed
 *
 *Return:  returns 0
 */
void print_alphabet_x10(void)
{
	int i;
	int j;
	for (j = 0;  j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
