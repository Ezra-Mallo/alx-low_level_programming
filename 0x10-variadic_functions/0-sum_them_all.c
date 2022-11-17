#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: 1st Parameter
 * @...: Ellipsis
 * Return: returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;
	va_list ap;	   /*1st macro declars va_list argument ptr (ap) */


	if (n == 0)
		return (0);

	va_start(ap, n);   /*2nd macro va_start initialis va_start (ap, count)*/
	for (i = 0; i < (int) n; i++)
		sum = sum + va_arg(ap, int); /* 3rd macro va_arg(ap, int) */

	va_end(ap);                          /* 4th macro va_end(ap) */

	return (sum);
}
