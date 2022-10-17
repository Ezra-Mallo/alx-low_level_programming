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
		putchar(i + '0');
		putchar(44);
		putchar(32);

		i++;
	}
	return (0);
}
