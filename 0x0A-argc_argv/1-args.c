#include <stdio.h>

/**
 * main - a function that prints the number of arguments passed
 * @argc: Argument count... counts the number of arguments passed
 * @argv: An array that contains the arguments passed
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
