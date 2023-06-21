#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - iterating over an array
 * @array: array to be iterated on
 * @size: size of an array
 * @action: a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
