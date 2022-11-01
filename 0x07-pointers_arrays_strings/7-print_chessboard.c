#include "main.h"

/**
 * print_cheesboard - a function that prints the chessboard
 * @a: pointer
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	int size;

	size = sizeof(*a);
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
