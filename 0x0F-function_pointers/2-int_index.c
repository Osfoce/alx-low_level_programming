#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - returns the integer position
 * @array: array to be searched
 * @size: size of the array
 * @cmp: a pointer to be used to compare
 * Return: 0 if false, something else if otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			return (i);
			i++;
		}
	}
	return (-1);
}
