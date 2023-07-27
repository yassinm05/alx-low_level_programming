#include "lists.h"

/**
 * free_list - check the code
 *
 * @head : is a param
 *
 * Return: count.
 */

void free_list(list_t *head)
{
	list_t *node;
	list_t *next_node;

	if (head == NULL)
	{
		return;
	}
	node = head;

	while (node != NULL)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}
