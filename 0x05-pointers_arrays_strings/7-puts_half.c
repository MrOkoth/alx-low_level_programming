#include "main.h"
#include <stdio.h>

/**
 * puts_half -print half of a string
 * @str: p
 * Return: void
 */

void puts_half(char *str)
{
	int t, n, count = 0;

	for (t = 0 ; str[t] != '\0' ; t++)
		count++;
	n = (count - 1) / 2;
	for (t = n + 1 ; str[t] != '\0' ; t++)
		putchar(str[t]);
	putchar('\n');
}
