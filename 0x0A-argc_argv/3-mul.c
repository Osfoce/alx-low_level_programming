#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiples of args passed
 * @argc: the number of args passed
 * @argv: an array os passed args
 * Return: 0 if sucessful else 1
 */
int main(int argc, char *argv[])
{
	int i, res = 0;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
