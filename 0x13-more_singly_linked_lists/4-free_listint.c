#include "lists.h"

/**
 * free_listint - check the code
 *
 * @head : is a param
 *
 * Return: count.
 */

void free_listint(listint_t *head)
{
	listint_t *node;
	listint_t *next_node;

	if (head == NULL)
	{
		return;
	}
	node = head;

	while (node != NULL)
	{
		next_node = node->next;
		free(node->n);
		free(node);
		node = next_node;
	}
}
