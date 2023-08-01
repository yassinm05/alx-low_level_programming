#include "lists.h"

/**
 * free_listint2 - check the code
 *
 * @head : is a param
 *
 * Return : count.
 */

void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *next_node;

	if (head == NULL)
	{
		return;
	}
	node = *head;

	while (node != NULL)
	{
		next_node = node;
		node = node->next;
		free(next_node);
	}
	*head = NULL;
}
