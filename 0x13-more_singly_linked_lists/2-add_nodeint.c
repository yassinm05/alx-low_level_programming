#include "lists.h"

/**
 * add_nodeint - check the code
 *
 * @head : is a param
 *
 * @n : is a param
 *
 * Return: count.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL || head == NULL)
	{
		return (NULL);
	}
	else
	{
		if (*head != NULL)
		{
			node->next = *head;
			*head = node;
			node->n = n;
		}
		else
		{
			node->next = NULL;
			*head = node;
			node->n = n;
		}
	}
	return (node);
}
