#include "main.h"

/**
 * print_sign - prints signs
 * @n: is the integer parameter passed
 *
 * Description:
 * Return: 1 and print + if n > 0
 *          0 and print 0 if n = 0
 *          -1 and print + if n < 0
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		result = -1;
	}

	return (result);
}
