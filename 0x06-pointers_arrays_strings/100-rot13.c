#include <stdio.h>
#include "main.h"

/**
 * *rot13 -  Write a function that encodes a string using rot13
 * @s: The digit to print
 * Return: a pointer value
 */
char *rot13(char *s)
{
	int i = 0, val_check;

	while (s[i])
	{
		val_check = s[i];
		if (val_check >= 65 && val_check <= 77)
		{
			val_check = val_check + 13;
			s[i] = val_check;
		}
		else if (val_check >= 78 && val_check <= 90)
		{
			val_check = val_check - 13;
			s[i] = val_check;
		}
		else if (val_check >= 97 && val_check <= 109)
		{
			val_check = val_check + 13;
			s[i] = val_check;
		}
		else if (val_check >= 110 && val_check <= 122)
		{
			val_check = val_check - 13;
			s[i] = val_check;
		}
		i++;
	}
	return (s);
}
