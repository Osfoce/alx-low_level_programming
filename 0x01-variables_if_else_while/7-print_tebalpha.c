#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
/**
 * main - to print alphabet using putchar
 *
 * Return: zero
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

