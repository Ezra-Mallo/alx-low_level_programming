#include <stdio.h>

/* this code will print a to z in lower cases. */

/**
 * main - This is the main entry to the program
 * @void: the main program takses no argument
 *
 * Desciption: This program prints the single digits of base 10
 * Return: returns zero
 */
int main(void)
{
	long int i;
	long int j;

	i = 0;

	for (j = 0; j < 9; j++)
	{
		i = j + 1;
		while (i <= 9)
		{
			putchar(j + '0');
			putchar((i % 10) + '0');
			if (j != 8)
				putchar(44), putchar(32);
			i++;
		}
	}

	putchar('\n');
	return (0);
}
