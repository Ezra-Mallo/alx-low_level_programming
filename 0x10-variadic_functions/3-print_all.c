#include "variadic_functions.h"

:
/**
 * print_all - write a function that returns the sum of all its parameters
 * @format: 1st parameter
 */
void print_all(const char * const format, ...)
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
			if (i != (n - 1))
				printf("%s", separator);
		}
		printf("\n");

		va_end(str);
	}
}
