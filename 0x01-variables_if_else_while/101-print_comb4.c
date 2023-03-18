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
	int i, j, k;
	
	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			for (k = 50; k < 58; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

