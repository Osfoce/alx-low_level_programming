#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - allocate space for an array
 * @c: Character
 * @size: the integer
 * Return: a pointer to an array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	char *i;

	i = malloc(size * sizeof(char));

	if (size == 0 && i == NULL)
	{
		return (NULL);
	}
	while (a < size)
	{
		i[a] = c;
		a++;
	}
	i[a] = '\0';
	return (i);
}
