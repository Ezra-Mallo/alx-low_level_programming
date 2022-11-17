#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - write a function that returns the sum of all its parameters
 * @separator: 1st parameter
 * @n: 2nd Parameter
 * @...: 3rd Ellipsis
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *buf;
	va_list str;


	if (separator == NULL && n == 0)
		exit(0);

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		buf = va_arg(str, char *);
		if (buf == NULL)
			buf = "nil";
		printf("%s", buf);
		if (i != (n - 1))
			printf("%s", separator);/* 3rd macro va_arg(ap, int) */
	}
	va_end(str);                             /* 4th macro va_end(ap) */

	printf("\n");
}
