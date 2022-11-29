#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked
 *               list, and returns the head node’s data (n)
 * @head: is the header parsed as parameter
 * Return: It returns an interger
 */
int pop_listint(listint_t **head)
{
	int ret_value;
	listint_t *my_pop_Node;



	if (head == NULL)
		return (0);

	my_pop_Node = *head;
	ret_value = (*head)->n;
	*head = (*head)->next;
	free(my_pop_Node);

	return (ret_value);
}
