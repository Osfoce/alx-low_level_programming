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
	int x = 'A';

	while (x <= 'Z')
	{
		x = tolower(x);
		putchar(x);
		x++;
	}

}
