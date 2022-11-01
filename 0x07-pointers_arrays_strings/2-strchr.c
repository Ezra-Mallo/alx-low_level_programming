#include "main.h"

/**
 * *_strchr - a function that gets the length of a prefix substring
 * @s: First parameter
 * @c: Second parameter
 * Return: int
 *
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char char_cmp;
	char *ptr;
	int chk = 0;


	while (s[i])
	{
		char_cmp = *(s + i);
		if (char_cmp == c)
		{
			ptr = &s[i];
			chk = 1;
			break;
		}
		i++;
	}
	if (chk == 1)
		return (ptr);
	else
		return (0);
}
