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
	long int ascii_char;

	for (ascii_char = 48; ascii_char < 58; ascii_char++)
	{
		
		i = 12;
		
		while (i < 90)
		{
			if (i % 10 != 0 && i % 11 != 0 && i % 21 != 0 && i % 31 != 0 && i % 32 != 0
					&& i % 41 != 0 && i % 42 != 0 && i % 43 != 0 && i % 51 != 0 && i % 52 != 0
					&& i % 53 != 0 && i % 54 != 0 && i % 61 != 0 && i % 62 != 0 && i % 64 != 0
					&& i % 65 != 0 && i % 71 != 0 && i % 72 != 0 && i % 73 != 0 && i % 74 != 0
					&& i % 75 != 0 && i % 76 != 0 && i % 81 != 0 && i % 82 != 0 && i % 83 != 0
					&& i % 84 != 0 && i % 85 != 0 && i % 87 != 0)
			{
				putchar(ascii_char);
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(44), putchar(32);
			}
			
			i++;
		}
		/*ascii_char++;*/
	}

	putchar('\n');
	return (0);
}
