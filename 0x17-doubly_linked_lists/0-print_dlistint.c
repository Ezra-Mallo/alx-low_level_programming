#include "lists.h"

/* 0-print_dlistint.c  */

/**
 * print_dlistint - Function that prints all the elements of a list.
 * @h: header
 *
 * Return: returns the header
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count += 1;
	}
	return (count);
}
