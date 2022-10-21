#include "main.h"

/**
 * print_triangle -  to print diagonally
 * @size: number of xters to print
 *
 * Desciption: The xter n times
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j, k;    /* counters*/
	int blnk;
	int xter;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			blnk = size - i;
			xter = i;
			for (j = 1; j <= blnk; j++)
				_putchar(' ');
			for (k = 1; k <= xter; k++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
