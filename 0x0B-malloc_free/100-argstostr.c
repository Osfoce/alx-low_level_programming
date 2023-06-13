#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *argstostr - a function that concates all
 * of the arguments of your program
 * @ac:int
 * @av:array
 * Return: array
 */

char *argstostr(int ac, char **av)
{
	int a, b, c, d, i, j;
	char *s;

	i = 0;
	j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (c = 0; c < ac; c++)
	{
		for (d = 0; av[c][d] != '\0'; d++)
		{
			i++;
			i++;
		}
	}
	s = malloc(sizeof(char) * i + 1);
	if (s == NULL)
	return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			s[j] = av[a][b];
			j++;
		}
		s[a++] = '\n';
	}
	s[a] = '\0';
	return (s);
}
