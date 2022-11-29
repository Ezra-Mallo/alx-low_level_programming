#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: This is the list header
 */
void free_listint2(listint_t **head)
{
	listint_t *buffer;

	while (*head != NULL)
	{
		buffer = (*head)->next;
		free(*head);
		*head = buffer;
	}
	head = NULL;
	free(head);
	free(buffer);
}
