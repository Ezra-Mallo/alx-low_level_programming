#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char d[10];
	char c;
	int i;

	c = '0';

	d[0] = c;
	d[1] = ':';
	d[2] = ' ';
	d[3] = _isdigit(c) + '0';
	d[4] = '\n';

	c = 'a';

	d[5] = c;
	d[6] = ':';
	d[7] = ' ';
	d[8] = _isdigit(c) + '0';

	for (i = 0; i < 9; i++)
		_putchar((d[i]));

	_putchar('\n');
	return (0);
}
