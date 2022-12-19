#ifndef _PRINTF_H_
#define _PRINTF_H_
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * struct specify - Struct op
 *
 * @sp: The operator
 * @fn: The function associated
 * va_list: for the macro calls
 */
typedef struct specify
{
	char *sp;
	int (*fn)(va_list arg_pointer);
} strut_spfy;


int _printf(const char *format, ...);
int (*get_specifier(const char *format))(va_list arg_pointer);
void print_pcnt(va_list arg_pointer);
void print_char(va_list arg_pointer);
void print_inte(va_list arg_pointer);
void print_flot(va_list arg_pointer);
void print_strg(va_list arg_pointer);


#endif
