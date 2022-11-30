#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - a function that returns the sum of all the data
 *               (n) of a listint_t linked list
 * @head: This is the list header
 * Return: sum of n
 */
int sum_listint(listint_t *head)
{
	listint_t *buffer;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		buffer = head->next;
		head = buffer;
	}

	return (sum);
}
