#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - addition of two args
 * @argc: contains the number of args
 * @argv: arrays of args to be added
 * Return: 0 if sucessful and 1 if not
 */
int main(int argc, char *argv[])
{
	int x = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		x = x + atoi(argv[i]);
	}
	printf("%d\n", x);
	return (0);
}
