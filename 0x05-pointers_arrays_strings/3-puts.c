#include "main.h"
#include <stdio.h>

/**
 * _puts -Prints a string
 * @str: p
 * Return: void
 */

void _puts(char *str)
{
	int t;

	for (t = 0 ; str[t] != '\0' ; t++)
		putchar(str[t]);
	putchar('\n');
}
