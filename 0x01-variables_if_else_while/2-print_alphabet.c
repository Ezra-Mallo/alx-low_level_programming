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
	for (int i = 'A'; i <= 'Z'; i++)
	{
		putchar(tolower(i));
		/**
		 * char alphabets;
		 * alphabets = tolower(i);
		 *putchar("%d, ", alphabets);
		 */
	}
	return (0);
}


