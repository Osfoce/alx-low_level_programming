#include <unistd.h>

/**
 * _putchar - return the character c to stdout
 * @c: is the character to be printed
 *
 * Return: when sucessful 1.
 * else, return -1, and errno set appropriately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1))
}
