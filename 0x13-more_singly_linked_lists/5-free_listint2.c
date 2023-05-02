#include "lists.h"

/**
 * free_listint2 - frees the list and sets head to null
 * @head: Head
 *
 * Return: returns 0
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (*head == NULL)
		return;
	while (*head)
	{
		list = *head->next;
		free(*head);
		*head = list;
	}
	*head = NULL;
}
