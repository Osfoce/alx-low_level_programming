#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers
 * @width: integer
 * @height: integer
 * Return: a double pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int y, z;
	int **x;

	if (width <= 0 || height <= 0)
		return (NULL);
	x = (int **)malloc(sizeof(int *) * height);
	if (x == NULL)
		return (NULL);
	for (y = 0; y < height; y++)
	{
		x[y] = (int *)malloc(sizeof(int) * width);
		if (x[y] == NULL)
		{
			for (z = 0; z < y; z++)
			free(x[z]);
			free(x);
			return (NULL);
		}
		for (z = 0; z < width; z++)
		{
			x[y][z] = 0;
		}
	}
	return (x);
}
