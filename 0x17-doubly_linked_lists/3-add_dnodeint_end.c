#include "lists.h"
/**
 * add_dnodeint_end - prints all the elements of a dlistint_t list
 * @head : is a param
 * @n : is a param
 *
 * Return: the number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (head == NULL || new == NULL)
	{
		if (new != NULL)
			free(new);
		return (NULL);
	}
	new->n = n;
	n->next = NULL;
	if (head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		node = *head;
		while (node->next != NULL)
			node = node->next;
		node->next = new;
		new->prev = node;
	}
	return (new);
}
