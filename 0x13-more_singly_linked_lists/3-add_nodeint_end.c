#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of listint_t list
 * @head: Head
 * @n: integer
 *
 * Return: retuens the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t))
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULl)
	{
		*head = new;
		return (new);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
