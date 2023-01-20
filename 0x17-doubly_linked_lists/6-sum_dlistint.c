#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all the data (n)
 *                of a dlistint_t linked list.
 * @head: thevhead of the list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
