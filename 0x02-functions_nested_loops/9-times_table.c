#include "main.h"

/**
 * times_table - This function processes 9 times table
 * @void: No parameter required
 */
void times_table(void)
{
	int i, j;
	int result, c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if	(result <10)
				c = ' ';
			else if (result <= 19)
				c = 1;
			else if (result <= 29)
				c = 2;
			else if (result <= 39)
				c = 3;
			else if (result <= 49)
				c = 4;
			else if (result <= 59)
				c = 5;
			else if (result <= 69)
				c = 6;
			else if (result <= 79)
				c = 7;
			else if (result <= 89)
				c = 8;

			/**if (result < 10)
				_putchar(c);
			else */

			if (result >= 10)
				_putchar(c + '0');
			_putchar((result % 10) + '0');

			if (j < 9)
				_putchar(','), _putchar(' '), _putchar(' ');

			if (result < 10)
				_putchar(' ');

		}
		_putchar('\n');
	}
}
