#include "lists.h"

/**
 * print_listint - This function pronts the elements in a single linked list
 * @h: is the header
 * Return: It returns an unsigned interger
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *my_print_list;
	size_t i = 0;

	if (h == NULL)
		return (0);

	my_print_list = h;


	if (my_print_list == NULL)
		return (0);

	while (my_print_list != NULL)
	{
		printf("%d\n", my_print_list->n);
		my_print_list = my_print_list->next;
		i++;
	}

	return (i);
}
