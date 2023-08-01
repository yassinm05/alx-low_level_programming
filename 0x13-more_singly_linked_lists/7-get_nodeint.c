#include "lists.h"

/**
 * get_nodeint_at_index - check the code
 *
 * @head : is a param
 *
 * @index : is a param
 *
 * Return: count.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	node = head;
	while (node != NULL && i < index)
	{
		node = node->next;
		i++;
	}
	return (node);
}
