#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x raised to
 * the power of y
 * @x: First parameter
 * @y: Second parameter
 *
 * Return: a value is returned
 */
int _pow_recursion(int x, int y)
{
	int r = 0;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		r = x * _pow_recursion(x , y - 1);
	return (r);
}
