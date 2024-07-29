#include "lists.h"

/**
 * free_list - Function that frees a list_t list
 *
 * @head: Parameter type list_t
 *
 * Return: Nothing
*/

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{

		tmp = head->next;

		if (head->str != NULL)
			free(head->str);
		free(head);
		head = tmp;
	}
}
