#include "main.h"

/**
 * more_numbers -  to print numbers
 * @void: The digit tp print
 * Return: noting
 */
void more_numbers(void)
{
	int i, h;

	for (h = 0; h < 10; h++)
	{
		for (i = 0 ; i <= 14;  i++)
		{
			if (i < 10)
			{
				_putchar(i + '0');
			}
			else if (i >= 10)
			{
				_putchar('1');
				_putchar((i % 10) + '0');
			}
		}
	_putchar('\n');
	}
}
