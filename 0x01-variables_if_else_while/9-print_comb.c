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

	for (i = 48; i < 58; i++)
	{
		putchar(32);
		putchar(i);
		putchar(44);
	}
	putchar('\n');
	return (0);
}

