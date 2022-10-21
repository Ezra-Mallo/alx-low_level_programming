#include "main.h"

/**
 * print_diagonal -  to print diagonally
 * @n: number of xters to print
 *
 * Desciption: The xter n times
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
