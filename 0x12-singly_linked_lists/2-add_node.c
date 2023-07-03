#include "lists.h"
#include <string.h>
/**
 * add_node - a function that adds node at
 * the begining of a list_t
 * @head: double pointer to the ist_t list
 * @str: new string to be added to the list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int n = 0;

	new = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
