#include "lists.h"

/**
 * add_nodeint - This function pronts the elements in a single linked list
 * @head: is the header parsed as parameter
 * @n: is the field parsed as parameter
 * Return: It returns an unsigned interger
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *my_new_Node;


	if (head == NULL)
	{
		return (NULL);
	}

	my_new_Node = malloc(sizeof(listint_t));


	my_new_Node->n = n;
	my_new_Node->next = *head;
	*head = my_new_Node;

	return (*head);
}
