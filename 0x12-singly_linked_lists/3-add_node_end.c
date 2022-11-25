#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - This function adds data to the end of single linked list
 * @head: This is the list header
 * @str: This is the string to the added
 * Return: This retruend an unsigned int of number of nodes
 *If str is NULL, print [0] (nil)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (str == NULL || head == NULL)
		return (NULL);

	newNode->str = (char *)(strdup(str));
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (NULL);
	}
	else
	{
		list_t *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;

		return (lastNode);
	}
}
