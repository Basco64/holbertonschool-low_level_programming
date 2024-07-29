#include "lists.h"

/**
 * free_dlistint - Function that frees a dlistint_t list
 *
 * @head: Parameter type list_t
 *
 * Return: Nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t  *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
