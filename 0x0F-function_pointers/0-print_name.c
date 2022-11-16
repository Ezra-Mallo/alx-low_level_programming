#include "function_pointers.h"

/**
 * print_name - Write a function that prints a name
 * @name: First parameter
 * @f: Second parameter
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
