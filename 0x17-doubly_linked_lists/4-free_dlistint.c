#include "lists.h"
/**
 * free_dlistint - prints all the elements of a dlistint_t list.
 * @head : is a param
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
