#include "lists.h"

/**
 * sum_dlistint - 
 * @head:
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
