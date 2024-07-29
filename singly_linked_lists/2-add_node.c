#include "lists.h"

/**
 * add_node - Function that adds a new node at the beginning of a list_t list
 *
 * @head: Pointer to parameter type list_t
 * @str: The string to duplicate in new node
 *
 * Return: The adress to the new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newElem = malloc(sizeof(list_t));
	unsigned int len = 0;

	if (newElem == NULL)
		return (NULL);

	newElem->str = strdup(str);
	if (newElem->str == NULL)
	{
		free(newElem);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	newElem->len = len;

	if (head == NULL)
		newElem->next = *head;
	else
		newElem->next = NULL;

	*head = newElem;

	return (newElem);
}
