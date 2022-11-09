#include "main.h"

/**
 * *_strstr - a function that locates a substring
 * @haystack: First parameter
 * @needle: Second parameter
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	int index;
	int flag = 0, chk = 0;

	while (needle[i] != '\0')
	{
		while (haystack[j] != '\0')
		{
			if (needle[i] == haystack[j] && flag == 0)
			{
				if (chk < 1 && flag != 1)
					index = j;
				chk++;
				flag = 1;
				break;
			}
			else
				flag = 0;
			j++;
		}
		i++;
	}
	if (chk == i && flag == 1)
	{
		return (&haystack[index]);
	}
	else
		return (0);
}
