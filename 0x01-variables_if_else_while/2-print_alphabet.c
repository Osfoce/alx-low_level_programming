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
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
}
