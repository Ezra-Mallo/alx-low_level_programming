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
	int i = 0, num;
	int count = 0, sum = 0;
	int exp;
	char null_char;
	char* nu[];
	
	null_char = 'x';


	while (null_char != '\0')
	{
		null_char = *(s + count);

		count = count + 1;
		if (null_char >= 48 && null_char <= 57)
		{
			num = null_char - '0';
			nu[i]= num;
			printf("j= %d, num = %d", i, num);
			putchar('\n');
			exp = (int)pow(10, i);
			sum = sum + (exp * num);
			i++;
		}
	}

	while (null_char != '\0')
	{
		printf(nu[]);
	}

	return (sum);
}
