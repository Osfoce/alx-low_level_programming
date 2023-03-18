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
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

