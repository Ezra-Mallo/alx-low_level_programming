#include "main.h"

/**
 * more_numbers -  to print numbers
 * @void: The digit tp print
 * Return: nothing
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
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
	}
}
