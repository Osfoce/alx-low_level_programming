#include "main.h"
/**
  * flip_bits - calculates the number of bits needed
  * to get from one number to another
  * @n: base number
  * @m: number to transform to
  * Return: the number of bit transformations needed
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	int count;

	x = n ^ m;

	for (count = 0; x != 0; count++)
	{
		x = x & (x - 1);
	}
	return (count);
}
