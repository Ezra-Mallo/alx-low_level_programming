#include "variadic_functions.h"

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


	if (strlen(separator) == 0 || separator == NULL)
		exit(0);

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		buf = va_arg(str, char *);
		if (strlen(buf) == 0)
			buf = "nil";
		printf("%s", buf);
		if (i != (n - 1))
			printf("%s", separator);
	}
	va_end(str);

	printf("\n");
}
