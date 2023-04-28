#include "lists.h"

/**
 * list_len - a function that returns the number
 * of elements in a linked list_t list
 * @h: input pointer to the list_t list
 * Return: returns the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t y = 0;

	while (h)
	{
		y++;
		h = h->next;
	}

	return (y);
} 
