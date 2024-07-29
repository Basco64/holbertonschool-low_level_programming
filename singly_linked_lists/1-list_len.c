#include "lists.h"

/**
 * list_len - Function that returns the number of
 * elements in a linked list_t list
 *
 * @h: Parameter type list_t
 *
 * Return: The number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}

	return (len);
}
