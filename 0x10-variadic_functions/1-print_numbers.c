#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - write a function that returns the sum of all its parameters
 * @separator: 1st parameter
 * @n: 2nd Parameter
 * @...: 3rd Ellipsis
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;		/*1st macro declars arg list (va_list) to arg ptr(ap) */


	if (separator != NULL && n != 0)
	{
		/* 2nd macro va_start initialis arg list (va_list ap,count) */
		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int)); /* 3rd macro va_arg(ap, int) */
			if (i != (n - 1))
				printf("%s", separator);/* 3rd macro va_arg(ap, int) */
		}
		va_end(ap);                             /* 4th macro va_end(ap) */
	}
	printf("\n");
}
