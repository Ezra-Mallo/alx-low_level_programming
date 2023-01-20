#include "lists.h"

/**
 * get_dnodeint_at_indexi - Function that returns the nth node of a
 *                          dlistint_t linked list.
 * @head: the head of the list
 * @index: the index of the list
 * Return: returns the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int count = 0;

	if (head == NULL)
		return (0);

	ptr = head;
	while (ptr != NULL)
	{
		if (count == index)
			break;
		ptr = ptr->next;
		count++;
	}
	return (ptr);
}
