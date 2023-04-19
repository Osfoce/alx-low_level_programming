#include <unistd.h>
/**
 * _putchar - writes the character to stdout
 * @c: Is the character to be printed
 *
 * Return: 1 if sucessful.
 * On error, -1 is returned, and errno is set approximately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
