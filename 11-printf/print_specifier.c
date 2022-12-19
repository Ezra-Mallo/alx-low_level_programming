#include "main.h"


/**
 * print_pcnt - Prints a percent
 * @arg_pointer: arguments pointing to character to be printed
 *
 * Return: k
 */
void print_pcnt(va_list arg_pointer)
{
	char p;
	int k;

	p = '%';
	k = write(1, p, 1);
	return (k);
}


/**
 * print_char - Prints a char
 * @arg_pointer: arguments pointing to character to be printed
 *
 * Return: k
 */
void print_char(va_list arg_pointer)
{
	char c;
	int k;

	c = va_arg(arg_pointer, char);
	k = write(1, c, 1);
	return (k);
}



/**
 * print_deci - Prints a decimal
 * @arg_pointer: arguments pointing to decimal to be printed
 *
 * Return: k
 */
void print_deci(va_list arg_pointer)
{
	int n;
	int k;

	n = va_arg(arg_pointer, int);
	k = write(1, n, 1);
	return (k);
/**
 * print_inte - Prints an int.
 * @arg_pointer: arguments pointing to integer to be printed
 *
 * Return: k
 */
void print_inte(va_list arg_pointer)
{
	int n;
	int k;

	n = va_arg(arg_pointer, int);
	k = write(1, n, 1);
	return (k);
}



/**
 * print_flot - Prints a float.
 * @arg_pointer: arguments pointing to float to be printed
 *
 * Return: k
 */
void print_flot(va_list arg_pointer)
{
	float n;
	int k;

	n = va_arg(arg_pointer, double);
	k = write(1, n, 1);
	return (k);
}



/**
 * print_strg - Prints a string.
 * @arg_pointer: arguments pointing to string to be printed
 *
 * Return: k
 */
void print_strg(va_list arg_pointer)
{
	char *str;
	int t, k;

	str = va_arg(arg_pointer, char *);
	t = strlen(str);

	if (str == NULL)
	{
		write(1, "<==>", 4);
		return;
	}

	k = write(1, str, t);
	return (k);
}


