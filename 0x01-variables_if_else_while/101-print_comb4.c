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
	i = 12;


	while (i < 90)
	{

		/* 012, 120, 102, 021, 201, 210 */

		if (i != 12 && i != 120 && i != 102 && 1 != 21 && i != 210)
		{
			putchar('0');
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

