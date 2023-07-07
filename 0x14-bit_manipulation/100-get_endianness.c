#include "main.h"
/**
 * get_endianness - checks if a machine is little or big
 * Return: 0 if big 1 if little
 */
int get_endianness(void)
{
	int i;
	char *test;

	i = 1;
	test = (char *)&i;
	return ((int)test[0]);
}
