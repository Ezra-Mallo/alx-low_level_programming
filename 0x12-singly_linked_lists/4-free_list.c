#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - This function frees the heap memory
 * @head: This is the list header
 */
void free_list(list_t *head)
{
	list_t *buffer;

	while (head)
	{
		buffer = head->next;
		free(head->str);
		free(head);
		head = buffer;
	}

}
