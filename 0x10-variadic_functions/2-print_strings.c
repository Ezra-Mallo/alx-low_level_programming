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


	va_start(str, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			buf = va_arg(str, char *);
			if (strlen(buf) == 0 || buf == NULL)
				buf = "nil";
			printf("%s", buf);
			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
		printf("\n");

		va_end(str);
	}
}
