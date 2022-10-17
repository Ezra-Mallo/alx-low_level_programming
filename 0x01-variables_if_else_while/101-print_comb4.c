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
	long int x;

	x = 0;
	j = 0;

	for (x = 0; x < 9; x++)
	{
		j = x + 1;
		while (j <= 9)
		{
			i = j + 1;
			while (i <= 9)
			{
				putchar(x + '0');
				putchar(j + '0');
				putchar((i % 10) + '0');
				if (x != 7)
					putchar(44);
				putchar(32);

				i++;
			}
			j++;
		}

	}
	putchar('\n');
	return (0);
}
