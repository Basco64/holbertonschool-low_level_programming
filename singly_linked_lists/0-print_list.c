#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list
 *
 * @h: Paremeter type list_t
 *
 * Return: The number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t len = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)");

		printf("[%d] %s\n", current->len, current->str);
		len++;
		current = current->next;
	}

	return (len);
}
