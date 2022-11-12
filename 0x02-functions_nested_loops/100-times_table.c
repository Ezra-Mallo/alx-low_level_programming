#include "main.h"

/**
 * print_times_table - This function processes 9 times table
 * @n: The is number to be mulplied with
 * @void: No parameter required
 */
void print_times_table(int n)
{
	int i, j;
	int r1, r2, r3, r4;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			r1 = i * j;
			if (r1 < 100)
			{
				r2 = r1 % 10;
				r3 = r1 / 10;
			}
			

			if (r1 < 1000)
			{
				r2 = r1 / 100;
				r3 = (r1 - (r2 * 100)) / 10;
				r4 = (r3 * 10) % 10;
			}
			if (r1 < 10)
			{
				_putchar(' ');
				_putchar(r2 + '0');
			}
			else if (r1 < 100)
			{
				_putchar(r3 + '0');
				_putchar(r2 + '0');
			}
			else if (r1 < 1000)
			{
				_putchar(r2 + '0');
				_putchar(r3 + '0');
				_putchar(r4 + '0');
			}

				if (j < 9)
				_putchar(','), _putchar(' ');

			/** if (result < 10)
				_putchar(' ');*/
		}
		_putchar('\n');
	}
}
