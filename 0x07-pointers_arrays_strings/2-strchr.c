#include "main.h"
/**
 * _strchr - character string
 * @s: the input
 * @c: also an input
 * Return: 0 if sucessful
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
