#include "lists.h"
/**
 * add_dnodeint - prints all the elements of a dlistint_t list.
 * @head : is a param
 * @n : is a param
 * Return: the number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (head == NULL || new_node == NULL)
	{
		if (new_node != NULL)
			free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
