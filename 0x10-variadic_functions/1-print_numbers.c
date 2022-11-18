#include "variadic_functions.h"

/**
 * print_numbers - write a function that returns the sum of all its parameters
 * @separator: 1st parameter
 * @n: 2nd Parameter
 * @...: 3rd Ellipsis
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;


	va_start(ap, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (i != (n - 1))
				printf("%s", separator);
		}
		va_end(ap);

		printf("\n");
	}
}
