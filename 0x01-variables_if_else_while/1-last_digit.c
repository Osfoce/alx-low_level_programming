#include <stdlib.h>
#include <time.h>
/**
 * main - headers goes there
 * Return: betty style doc for function main goes there
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("%s and is greater than 5", n);
	}
	else if (n < 6 && n != 0)
	{
		printf("%s and is less than 6 and not 0", n);
	}
	else
	{
		printf("%s and is 0", n);
	}
	return (0);
}
