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
	if (n == 0 || n < 0)
	{	
		_putchar('_');
	}
	else
	{
		for (i = 0 ; i <= n;  i++)
			_putchar('_');
	}
	_putchar('\n');
}
