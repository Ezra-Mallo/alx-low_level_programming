#include <stdio.h>
/**
 * print_name - Write a function that prints a name
 * @name: First parameter
 * @f: Second parameter
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
