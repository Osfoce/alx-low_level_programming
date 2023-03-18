#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - to print alphabet using putchar
 *
 * Return: zero
 */

int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
