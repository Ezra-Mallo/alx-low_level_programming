#include "main.h"

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes
 * @s: First parameter
 * @accept: Second parameter
 * Return: int
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	char char_cmp;
	char *ptr;
	int chk = 0;

	while (s[i])
	{
		char_cmp = *(s + i);
		for (j = 0; j < accept[j]; j++)
		{
			if (char_cmp == accept[j])
			{
				ptr = &s[i];
				chk = 1;
				break;
			}
		}
		if (chk == 1)
			break;
	i++;
	}
	if (chk == 1)
		return (ptr);
	else
		return (0);
}
