#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Write a function that inserts a new
 *                           node at a given position
 * @head: This is the list header
 * @idx: This is the index header
 * @n: n is the value to be added
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *buffer;
	size_t i = 0;

	if (head != NULL)
	{
		buffer = *head; /*malloc(sizeof(listint_t));*/


		while (head != NULL)
		{
			if (i != idx - 1)
			{
				buffer->n = (*head)->n;
				buffer->next = (*head)->next;
			}
			else if (i == idx - 1)
			{
				printf("%ld,  %d\n", i, idx);
				buffer->n = n;
				buffer->next = buffer;
			}
			i++;
		}
		buffer->next = *head;
		*head = buffer;
		return (*head);

	}
	return (NULL);

}
