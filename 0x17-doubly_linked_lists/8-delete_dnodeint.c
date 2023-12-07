#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at ceratin index
 * @head : is a param
 * @index : is a param
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;

	if (*head == NULL)
		return (-1);
	while (index != 0)
	{
		if (node == NULL)
			return (-1);
		node = node->next;
		index--;
	}
	if (node == *head)
	{
		*head = node->next;
		if (*head == NULL)
			(*head)->prev = NULL;
	}
	else
	{
		node->prev->next = node->next;
		if (node->next != NULL)
			node->next->prev = node->prev;
	}
	free(node);
	return (1);
}
