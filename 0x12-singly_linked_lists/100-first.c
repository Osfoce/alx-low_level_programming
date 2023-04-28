#include <stdio.h>

void msge(void)__attribute__((constructor));

/**
 * msge - prints a message on the screen
 * before the main function is executed
 * Return: nothing
 */

void msge(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
