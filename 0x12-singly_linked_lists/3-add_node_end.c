#include "lists.h"
/**
 * add_node_end - adds a node at the end of the list list_t
 * @head: the list_t
 * @str: str to be added
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *temp;
	unsigned int n = 0;

	end = malloc(sizeof(list_t));
	if (end == NULL)
	{
		return (NULL);
	}
	end->str = strdup(str);
	end->n = n;
	end->next = NULL
	if (*head == NULL)
	{
		*head = end
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = end;
	return (new);
}
