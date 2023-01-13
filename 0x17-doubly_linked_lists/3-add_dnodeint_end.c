#include "lists.h"

/* 3-add_dnodeint_end.c  */
/**
 * add_dnodeint_end - Function that adds a new node at the end of a list
 * @head: first parameter
 * @n: Item to be added
 *
 * Return: struct head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;
	return (new);
}
