#include "main.h"

/**
 * print_binary - Write a function that converts a binary number
 *                  to an unsigned int
 * @n: is the parameter for the decimal number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');

}
