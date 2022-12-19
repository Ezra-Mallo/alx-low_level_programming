#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: first parameer. a char data type
 * Return : returns and interger data type
 */
int _atoi(char *s)
{
	int i, j, k, num;
	int count = 0, dig = 0, sum = 0;
	int exp;
	char null_char;
	
	null_char = 'x';

	while (null_char != '\0')
	{
		null_char = *(s + count);
		count = count + 1;
		if (null_char >= 48 && null_char <= 57)
			dig++;
	}
	count = count - 1;
	k = count - dig;
	
	j = 1;

	for (i = count; i >= k; i--)
	{
		num = *(s + i);
		if (num >= 48 && num <= 57)
		{
			num = num - '0';
			printf("j= %d, num = %d", j, num);
			putchar('\n');
			exp = (int)pow(10, j);
			sum = sum + (exp * num);
			j++;
		}
		else if (num == 45)
			sum = -1 * sum ;
	}

	return (sum);
}
