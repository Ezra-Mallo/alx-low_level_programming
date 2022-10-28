#include "main.h"

/**
 * print_number -  to print numbers
 * @c: The digit tp print
 * Return: nothing
 */
void print_number(int c)
{
	unsigned int tmp;

	tmp = c;

	if (c < 0)
	{
		_putchar('-');
		tmp = -c;
	}

	if (tmp / 10 != 0)
	{
		print_number(tmp / 10);
	}
	_putchar((tmp % 10) + '0');
}
