#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - This function prints the content of single linked list
 *              If str is NULL, print [0] (nil)
 * @h: This is the list header
 * Return: This retruend an unsigned int of number of nodes
 *If str is NULL, print [0] (nil)
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	int count;
	const list_t *my_list;


	if (h != NULL)
	{
		my_list = h;

		while (my_list != NULL)
		{
			if (my_list->str == NULL)
				printf("[0] (nil)\n");
			else
			{
				count = strlen(my_list->str);
				printf("[%d] %s\n", count, my_list->str);
			}
			my_list = my_list->next;
			i++;
		}
	}
	return (i);
}
