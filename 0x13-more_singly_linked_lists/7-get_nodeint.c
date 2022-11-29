#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - a function that frees a listint_t list
 * @head: This is the list header
 * @index: This is the list header
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *buffer;
	size_t i = 0;

	while (i < index)
	{
		buffer = head->next;
		head = buffer;
		i++;
	}


	return (head);

}
