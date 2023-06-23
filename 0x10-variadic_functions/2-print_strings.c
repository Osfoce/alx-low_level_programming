#include "variadic_functions.h"

/**
 * print_strings - a function that prints a string
 * @separator: its the string to be printed between lines
 * @n: the number of strings passed
 * Return: 0 if sucessful else nil
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (!str)
		{
			str = "(nil)";
		}
		if (!separator)
		{
			printf("%s", str);
		}
		else if (separator && i == 0)
		{
			printf("%s", str);
		}
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(ap);
}
