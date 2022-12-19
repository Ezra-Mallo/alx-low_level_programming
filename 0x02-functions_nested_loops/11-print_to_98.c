#include "main.h"

/**
 * print_to_98 - This function processes 9 times table
 * @n: The is number to be mulplied with
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = 0; i <= n; i++)
		{
			if (n < 10)
				_putchar(n % 10 + '0');
			else if (n >= 10)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
	_putchar('\n');
	}
}
