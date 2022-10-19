#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - This functions prints the last digit
 * @c: is the parameter of int data type
 *
 * Desciption: it returns the int value
 * Return: it will return the last digit
 */
int print_last_digit(int c)
{
	char result;

	result = c % 10;
	if (result < 0)
		result = -1 * result;
	else
		result = 1 * result;

	putchar(result + '0');
	return (result);
}
