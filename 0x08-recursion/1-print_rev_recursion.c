#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string,
 *			followed by a new line
 * @s: First parameter
 * Return: No value is returned
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
