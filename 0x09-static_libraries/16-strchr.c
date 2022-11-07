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
	char *ptr;
	int chk = 0;


	while (s[i] != '\0')
	{
		if (s[i] == c)
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
