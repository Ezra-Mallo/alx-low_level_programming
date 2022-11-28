#include "lists.h"

/**
 * listint_len - processes the number of elements in a single linked list
 * @h: is the header
 * Return: It returns an unsigned interger
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *count_list_element;
	unsigned int i = 0;

	count_list_element = malloc(sizeof(listint_t));

	if (h == NULL)
		return (0);

	count_list_element = h;




	while (count_list_element != NULL)
	{
		count_list_element = count_list_element->next;
		i++;
	}

	return (i);

}
