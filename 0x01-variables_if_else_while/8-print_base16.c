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
	int i;
	int ch;

	while (i < 16)
	{
		if (i == 10)
			ch = 'a';
		else if (i == 11)
			ch = 'b';
		else if (i == 12)
			ch = 'c';
		else if (i == 13)
			ch = 'd';
		else if (i == 14)
			ch = 'e';
		else if (i == 15)
			ch = 'f';
		else
			putchar(i + '0');

		putchar(ch);
		i++;
	}

	putchar('\n');
	return (0);
}
