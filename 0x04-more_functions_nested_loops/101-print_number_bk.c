#include "main.h"

/**
 * _put_many_chars -  toprint many charaters
 * @c: The digit tp print
 * Return: noting
 */
void _put_many_chars(int c)
{
	int condi = 1;
	int i = 1;
	int k;
	int num;
	int check1, check2;
	char n[50];

	if (c < 0)
	{
		_putchar('-');
		c *= -1;
	}

	num = c;
	while (condi == 1)
	{
		check1 = num % 10;
		check2 = num / 10;
		if (check2 > 0)
		{
			condi = 1;
			n[i] = check1;
			num = check2;
			i++;
		}
		else if (check2 == 0)
		{
			condi = 0;
			n[i] = check1;
			break;
		}
	}

	k = i;
	while (k > 0)
	{
		_putchar(n[k] + '0');
		k--;
	}
	_putchar('\n');
}
