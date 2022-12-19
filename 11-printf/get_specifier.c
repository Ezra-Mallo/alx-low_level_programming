#include "main.h"
#include <stdlib.h>

/**
 * get_specifier - This pics the correct specifier passed
 * @format: First parameter
 *
 * Return: Returns the operator
 */
int (*get_specifier(const char *format))(va_list arg_pointer)
{
	strut_spfy sp_array[7] = {
		{"c", print_char},
		{"s", print_strg},
		{"d", print_deci},
		{"i", print_inte},
		{"f", print_flot},
		{"%", print_pcnt},
		{NULL,  NULL}
	};

	int i = 0;

	for (i = 0; sp_array[i].sp != NULL; i++)
	{
		if (sp_array[i].sp == format)
			return (sp_array[i].fn);
	}
	return (NULL);
}
