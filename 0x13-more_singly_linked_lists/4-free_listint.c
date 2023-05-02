#include "lists.h"

/**
 * free_listint - frees a list
 * @head: Head
 *
 * Return: returns 0
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	if (head == NULL)
	{
		list = head->next;
		head = list;
		free(head);
		return (1);
	}
}
