#include "main.h"

/**
 * print_times_table - This function processes 9 times table
 * @n: The is number to be mulplied with
 */
void print_times_table(int n)
{
	int i, j, r1, r2, r3, r4;

	if (n < 15 && n != 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r1 = i * j;
				r2 = r1 % 10;
				r3 = r1 / 10;
				if (r1 < 10)
				{
					if (j > 0 && r1 < 10)
						_putchar(32), _putchar(32);
					_putchar(r2 + '0');
				}
				else if (r1 >= 10 && r1 < 100)
				{
					if (r1 >= 10)
						_putchar(32);
					_putchar(r3 + '0'), _putchar(r2 + '0');
				}
				if (r1 >= 100)
				{
					r4 = (r1 / 100);
					r3 = ((r1 - (r4 * 100)) / 10);
					r2 = ((r1 - (r4 * 100)) - (r3 * 10));
					_putchar(r4 + '0'), _putchar(r3 + '0'), _putchar(r2 + '0');
				}
				if (j != n)
				{
					if (r1 < 100)
						_putchar(','), _putchar(' ');
					else if (r1 >= 100)
						_putchar(','), _putchar(' ');
				}

			}
			_putchar('\n');
		}
	}
}
