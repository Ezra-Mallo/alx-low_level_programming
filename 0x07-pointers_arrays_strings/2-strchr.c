#include "main.h"

/**
 * *_strichr - a function that gets the length of a prefix substring
 * @s: First parameter
 * @accept: Second parameter
 * Return: int
 *
 */
char *_strchr(char *s, char c)
{
	int i, j, k;
	char char_cmp;
	char *ptr;

	*ptr = s[0];

	i = 0;
	k = 0;

	while (s[i])
	{
		char_cmp = *(s + i);
		if (char_cmp == c)
		{
			k = i;
			break;
		}
		
		i++;
	}
	j = 0;
	while (s[k])
	{
		*(ptr+j) = *(s + k);
		k++;
		j++;
	}

	return (ptr);
}
