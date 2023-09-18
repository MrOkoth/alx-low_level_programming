#include "main.h"
#include <stdio.h>

/**
 * puts2 - print every chaars
 * @str: p
 * Return: void
 */

void puts2(char *str)
{
	int t;

	for (t = 0 ; str[t] != '\0' ; t++)
	{
		if (t % 2 == 0)
			putchar(str[t]);
	}
	putchar('\n');
}
