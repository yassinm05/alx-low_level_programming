#include "lists.h"

/**
 * delete_nodeint_at_index - check the code
 *
 * @head : is a param
 *
 * @index : is a param
 *
 * Return: count.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *newhead;
	listint_t *prevnode;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		newhead = *head;
		*head = (*head)->next;
		free(newhead);
		return (1);
	}
	newhead = *head;
	while (newhead != NULL)
	{
		if (i == index)
		{
			prevnode->next = newhead->next;
			free(node);
			return (1);
		}
		i++;
		prevnode = newhead;
		newhead = newhead->next;
	}
	return (-1);
}
