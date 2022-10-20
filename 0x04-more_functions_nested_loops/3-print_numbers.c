#include "main.h"

/**
 * print_numbers -  to print numbers
 * @void: The digit tp print
 *
 * Return: noting
 */
void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9;  i++)
		_putchar(i + '0');
	_putchar('\n');
}
