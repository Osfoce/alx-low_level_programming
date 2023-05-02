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

	while (head == NULL)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
