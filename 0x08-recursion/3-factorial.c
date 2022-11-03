#include "main.h"

/**
 * factorial -e a function that returns the factorial of a given number.
 * @n: First parameter
 * Return: a value is returned
 */
int factorial(int n)
{
	int x = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	x = n * factorial(n - 1);
	return (x);
}
