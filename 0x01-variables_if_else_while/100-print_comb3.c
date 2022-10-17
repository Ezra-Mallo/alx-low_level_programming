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


	while (i < 90)
	{

		if (i != 10 && i != 20 && i != 30 && 1 != 40 && i != 50 &&
				i != 60 && i != 70 && 1 != 80 && i != 90)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			if (i != 89)
				putchar(44);
			putchar(32);
		}

		i++;
	}

	putchar('\n');
	return (0);
}
