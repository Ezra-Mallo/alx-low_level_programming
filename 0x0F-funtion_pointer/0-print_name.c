#include <stdio.h>
/**
 * print_name - Write a function that prints a name
 * @name:
 * @f:
 */
void print_name(char *name, void (*f)(char *fname))
{
	f(name);
}
