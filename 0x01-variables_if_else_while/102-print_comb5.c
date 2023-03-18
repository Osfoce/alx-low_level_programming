#include <stdio.h>

/**
 * main - main function
 *
 * Return: return 0
 */

int main(void)
{
	int j, k;

	for (j = 0; j < 100; j++)
	{
		for (k = 0; k < 100; k++)
		{
			if (j < k)
			{
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				putchar(32);
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
				if (j != 98 || k != 99)
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
