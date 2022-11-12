#include <stdio.h>

/**
 * main - This is the main entry to the program
 * @void: the main program takses no argument
 * Desciption: This program prints the single digits of base 10
 * Return: returns zero
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
