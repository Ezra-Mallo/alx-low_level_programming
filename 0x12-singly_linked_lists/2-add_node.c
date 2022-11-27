#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - This function adds data to the beginning of single linked list
 * @head: This is the list header
 * @str: This is the string to the added
 * Return: This retruend an unsigned int of number of nodes
 *If str is NULL, print [0] (nil)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (newNode != NULL)
	{
		newNode->str = (char *)(strdup(str));
		newNode->len = strlen(str);
		newNode->next = *head;
		*head = newNode;
		free(newNode->str);
		free(newNode);
	}
	else
		*head = NULL;
	free(newNode);
	return (*head);
}
