#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - a function that frees a listint_t list
 * @head: This is the list header
 */
void free_listint(listint_t *head)
{
	listint_t *buffer;

	if (head == NULL)
		return;
	else if (head != NULL)
	{
		while (head != NULL)
		{
			buffer = head->next;
			free(head);
			head = buffer;
		}
		head = NULL;
		free(head);
		free(buffer);
	}

}
