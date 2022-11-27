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
	char *duplicate;
	int l;

	newNode = malloc(sizeof(list_t));
	duplicate = strdup(str);

	if (newNode == NULL)
	{
		*head = NULL;
		return (NULL);
	}

	if (duplicate != NULL)
	{
		newNode->str = duplicate;
		l = strlen(str);
		newNode->len = l;
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		*head = NULL;
		return (NULL);
	}

	return (*head);
}
