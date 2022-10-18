#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - makes a call to _putchar to print alphabets
 * @void: no parameter passed
 *
 *Return:  returns 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
