#include <stdio.h>

int write(int filedes, const void *buf, unsigned int nbyte);

/**
 * main - is the main entry point
 * @void: Takes no argument
 *
 * Description: This is the main entry.
 * This code diplays a string text without using printf and put
 * Return: return 0 to show code has finished execution
 */
int main(void)
{
	write(1, "and that piece of art is useful\"\- Dora Korpar, 2015-10-19\n", 85);
	return (1);
}
