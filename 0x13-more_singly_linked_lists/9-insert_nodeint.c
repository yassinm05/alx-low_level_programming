#include "lists.h"

/**
 * insert_nodeint_at_index - check the code
 *
 * @head : is a param
 *
 * @idx : is a param
 *
 * @n : is a param
 *
 * Return: count.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *newhead;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	if (node == NULL || head == NULL)
	{
		return (NULL);
	}
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	newhead = *head;
	while (newhead != NULL)
	{
		if (i == idx - 1)
		{
			node->next = newhead->next;
			newhead->next = node;
			return (node);
		}
		i++;
		newhead = newhead->next;
	}
	free(node);
	return (NULL);
}
