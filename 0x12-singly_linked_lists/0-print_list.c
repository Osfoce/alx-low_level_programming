#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: the list head
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t x;

	for (x = 0; h; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
