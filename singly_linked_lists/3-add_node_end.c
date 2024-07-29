#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end of a list_t list
 *
 * @head: Pointer to parameter type list_t
 * @str: The string to duplicate in new node
 *
 * Return: The adress to the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newElem = malloc(sizeof(list_t));
	unsigned int len = 0;
	list_t *temp = *head;

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
	newElem->next = NULL;

	if (*head == NULL)
		*head = newElem;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		
		temp->next = newElem;
	}

	return (newElem);
}
