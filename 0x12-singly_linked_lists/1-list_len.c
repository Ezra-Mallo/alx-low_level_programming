#include "lists.h"
#include <stdio.h>

/**
 * list_len - This funtion prints the len of single list
 * @h: This is the list header
 * Return: This retruend an unsigned int of number of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;
	const struct list_s *my_list = h;

	while (my_list != NULL)
	{
		my_list = my_list->next;
		i++;
	}
	return (i);
}
