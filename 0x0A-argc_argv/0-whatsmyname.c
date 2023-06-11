#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints the name of a program
 * @argc: Argument count... counts the number of arguments passed
 * @argv: An array that contains the arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
