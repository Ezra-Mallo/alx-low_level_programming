#include <stdio.h>

/* this code will print a to z in lower cases. */

/**
 * main - This is the main entry to the program
 * @void: the main program takses no argument
 *
 * Desciption: This program prints the alphabets in reverse order
 * Return: returns zero
 * ascii_char were used to decode the lowecases
 */
int main(void)
{
	int ascii_char = 122;
	int i = 0;

	while (i < 26)
	{
		if (ascii_char != 101 && ascii_char != 113)
			putchar(ascii_char);

		ascii_char = ascii_char - 1;
		i++;
	}

	putchar('\n');
	return (0);
}
