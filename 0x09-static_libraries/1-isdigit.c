#include "main.h"

/**
 * _isdigit - function to determine upper cases as 1
 * @c: parameter
 *
 * Return: 1 = digits, 0= otherwise.
 */
int _isdigit(int c)
{
	int r;

	if (c >= 48 && c <= 57)
		r = 1;
	else
		r = 0;

	return (r);
}
