#include "main.h"

/**
 * print_line -  to print line for n times
 * @n: the first parameter
 *
 * Return: noting
 */
void print_line(int n)
{
	int i;

	for (i = 0 ; i <= n;  i++)
		_putchar('_');
	_putchar('\n');
}
