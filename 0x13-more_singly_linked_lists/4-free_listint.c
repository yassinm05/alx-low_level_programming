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
	listint_t *new_head;

	while (head != NULL)
	{
		new_head = head;
		head = head->next;
		free(new_head);
	}
}
