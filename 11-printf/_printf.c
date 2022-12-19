#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - This is the printf function
 * @format: is the first parameter
 *
 * Return: int value
 */
int _printf(const char *format, ...)
{
	va_list arg_pointer;
	int i = 0, v, k;

	va_start(arg_pointer, format);

	if (format == NULL)
		return (0);

	while (format[i])
	{
		if (format[i] != '%')
		{
			v = write(1, (format[i + 1]), 1);
			k = k + v;
		}
		else if (format[i] == "%")
		{
			v = get_specifier(format + 1);

			i++;
		}
		i++;
	}
}
