#include "main.h"
#include <stdio.h>

/**
 * print_rev -Prints a string in reverse
 * @s: p
 * Return: void
 */

void print_rev(char *s)
{
	int t;
	int count = 0;

	for (t = 0 ; s[t] != '\0' ; t++)
		count++;
	for (t = count - 1 ; t >= 0 ; t--)
		putchar(s[t]);
	putchar('\n');
}
