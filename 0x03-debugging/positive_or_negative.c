#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - prints signs
 * @n: is the integer parameter passed
 *
 * Description: this function cheks and returns the positive or negative value
 * Return: 1 and print + if n > 0
 *          0 and print 0 if n = 0
 *          -1 and print + if n < 0
 */
void positive_or_negative(int n)
{
	int result;

	if (n > 0)
	{
		putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		putchar('0');
		result = 0;
	}
	else if (n < 0)
	{
		putchar('-');
		result = -1;
	}
	printf("%d", result);
}
