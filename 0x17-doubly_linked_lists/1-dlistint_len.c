#include "lists.h"

/* 1-dlistint_len.c */

/**
 * dlistint_len - Function that returns the number of elements in a
 *                  linked dlistint_t list.
 * @h: header
 *
 * Return: returns the header
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
