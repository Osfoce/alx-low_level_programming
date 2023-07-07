#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	unsigned int dec;
	int i;

	sum = 0;
	dec = 1;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = (i - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			sum += dec;
		dec *= 2;
	}
	return (sum);
}
