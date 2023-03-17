#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - more headers goes there 
* Return: betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		print("%d is positive\n", n);
	}
	if (n == 0)
	{
		print("%d is zero\n", n);
	}
	else
	{
		print("%d is negative\n", n);
	}
	return (0);
}
