#include "main.h"

/**
 * *_strspn - a function that gets the length of a prefix substring
 * @s: First parameter
 * @accept: Second parameter
 * Return: int
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, l;
	char char_cmp1;
	char char_cmp2;
	char *a;

	a = accept;
	i = 0;
	j = 0;
	k = 0;

	while (a[i])
	{
		char_cmp1 = *(a + i);
		j = 0;
		while (s[j])
		{
			char_cmp2 = *(s + j);
			if (char_cmp1 == char_cmp2)
				k++;
			j++;
		}
		i++;
	}
	l = j - k;
		return (l);
}
