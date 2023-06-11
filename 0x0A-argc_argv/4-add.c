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
	int i, j, sum = 0;

	if (argc != 1)
	{
		printf("0\n");
	}
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
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
