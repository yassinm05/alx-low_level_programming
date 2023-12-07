#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at index
 * @h : is a param
 * @idx : is a param
 * @n : is a param
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx != 1)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
	}
	if (node->next == NULL)
		return (add_dnodeint_end(h, n));
	new->n = n;
	new->prev = node;
	new->next = node->next;
	node->next->prev = new;
	node->next = new;
	return (new);
}
