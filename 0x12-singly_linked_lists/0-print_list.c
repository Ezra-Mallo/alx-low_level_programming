#include "lists.h"
#include <stdio.h>

/**
 * print_list - This is the funtion that prints the content of single list
 *              If str is NULL, print [0] (nil)
 * @h: This is the list header
 * Return: This retruend an unsigned int of number of nodes
 *If str is NULL, print [0] (nil)
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	const struct list_s *my_list = h;

	while (my_list != NULL)
	{
		if (my_list->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s\n", my_list->str);
		my_list = my_list->next;
		i++;
	}
	return (i);
}
