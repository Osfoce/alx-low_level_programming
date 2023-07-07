#include "main.h"
/**
  * get_bit - gets value of int at an index
  * @n: input long integer
  * @index: index to start at
  * @ans: return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
  * Return: value of the bit at the index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int position;

	if (index > 64)
	{
		return (-1);
	}
	position = (n >> index) & 1;
	return (position);
}
