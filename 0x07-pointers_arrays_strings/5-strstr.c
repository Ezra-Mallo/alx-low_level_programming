#include "main.h"

/**
 * *_strspn - a function that gets the length of a prefix substring
 * @s: First parameter
 * @accept: Second parameter
 * Return: int
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	char char_cmp1;
	char char_cmp2;
	char *a;

	a = needle;
	i = 0;
	j = 0;
	k = 0;

	while (a[i])
	{
		char_cmp1 = *(a + i);
		j = 0;
		while (haystack[j])
		{
			char_cmp2 = *(haystack + j);
			if (char_cmp1 == char_cmp2)
				k=j, break;
			j++;
		}
		i++;
	}
	return (j - k);
}
