#include "main.h"

/**
 * times_table - This function processes 9 times table
 * @void: No parameter required
 */
void times_table(void)
{
	int i, j;
	int r1, r2, r3;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			r1 = i * j;
			r2 = r1 % 10;
			r3 = r1 / 10;
			

			if (r1 < 10)
			{
				_putchar(' ');
				_putchar(r2 + '0');
			}
			else if (r1 >= 10)
			{
				_putchar(r3 + '0');
				_putchar(r2 + '0');
			}

			if (j < 9)
				_putchar(','), _putchar(' ');

			/** if (result < 10)
				_putchar(' ');*/
		}
		_putchar('\n');
	}
}
