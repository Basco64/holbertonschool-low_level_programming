#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all the
 * data (n) of a dlistint_t linked list
 *
 * @head: Pointer to head of the linked list
 *
 * Return: The result of the sum
*/

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}
