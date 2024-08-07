#include "lists.h"

/**
 * dlistint_len - Function that returns the number of
 * elements in a linked dlistint_t list
 *
 * @h: Header
 *
 * Return: The number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}

	return (len);
}
