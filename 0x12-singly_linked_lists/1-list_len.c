#include "lists.h"
/**
 * list_len - returns the number of list element
 * @h: singly linked list to print
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
