#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array -  a function that creates an array of chars, and
 *                 initializes it with a specific char.
 * @size: size of the dynamic memory
 * @c: data type
 *
 * Return: Character pointer
 */
char *create_array(unsigned int size, char c)
{
	int i = 0;
	char **new_message = (char **)malloc(sizeof(char*) * size);

	char *a =malloc(size * sizeof(c));
	int b = size * sizeof(c);
	char *ptr;

	printf("module:\n%d\t %d\t [%d]\n", c, size, b);


	if (size == 0)
		return (NULL);


	for (i = 0; i < b; i++)
		a[i] = c;

	for (i = 0; i < b; i++)
		printf("0x%02x, ", a[i]);
	printf("\n");
	ptr = (char *)a;


	return (ptr);
}
