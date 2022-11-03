#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string,followed by new line
 * @s: First parameter
 * Return: No value is returned
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
