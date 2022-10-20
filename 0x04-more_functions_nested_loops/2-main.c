#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r1;
	int r2;

	r1 = mul(98, 1024);
	_put_many_chars(r1);
	
	r2 = mul(-402, 4096);
	_put_many_chars(r2);
	_putchar('\n');
	
	return (0);
}
