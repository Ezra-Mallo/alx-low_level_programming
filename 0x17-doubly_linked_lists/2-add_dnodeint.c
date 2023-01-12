#include "lists.h"

/* 2-add_dnodeint.c */

/**
 * add_dnodeint - Function that adds a new node at the beginning of a  list
 * @head: header
 * @n: number to be added
 *
 * Return: returns the header
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
