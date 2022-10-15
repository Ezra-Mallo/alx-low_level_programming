#include <stdio.h>

/* this code will print a to z in lower case */

/**
 * main - This is the main entry to the program
 * @void: the main program takses no argument
 *
 * Desciption: This program prints the alphabets in alphabetical order
 * Return: returns zero
 */
int main(void)
{
	int ascii_char = 97;
	int i = 0;

	while (i <= 26)
	{
		putchar (ascii_char + i);
		i++;
	}
	return (0);
}
