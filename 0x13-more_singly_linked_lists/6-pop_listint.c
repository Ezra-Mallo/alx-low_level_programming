#include "lists.h"

/**
 * pop_listint - This function pronts the elements in a single linked list
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
