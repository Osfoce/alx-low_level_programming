#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: contains the NO. of args passed
 * @argv: an array of args
 * Return: 0 if sucessful and 1 if not
 */

int main(int argc, char *argv[])
{
	int i, j, n, s, ch = 0;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	s = atoi(argv[1]);
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < 1)
		{
			printf("0\n");
		}
		for (j = 0; j < 5 && s; j++)
		{
			n = s / c[i];
			ch += n;
			s -= n * c[i];
		}
	}
	printf("%d\n", ch);
	return (0);
}
