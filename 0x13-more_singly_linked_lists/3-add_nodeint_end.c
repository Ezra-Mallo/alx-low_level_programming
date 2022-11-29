#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - This function adds data to the end of single linked list
 * @head: This is the list header
 * @n: This is the n to the added
 * Return: This retruend an unsigned int of number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode_end, *last_Node_pointer;

	newNode_end = malloc(sizeof(listint_t));

	if (newNode_end == NULL)
	{
		return (NULL);
	}

	newNode_end->n = n;
	newNode_end->next = NULL;

	if (*head == NULL)
		*head = newNode_end;
	else
	{
		last_Node_pointer = *head;


		while (last_Node_pointer->next != NULL)
		{
			last_Node_pointer = last_Node_pointer->next;
		}
		last_Node_pointer->next = newNode_end;
	}

	return (*head);
}
