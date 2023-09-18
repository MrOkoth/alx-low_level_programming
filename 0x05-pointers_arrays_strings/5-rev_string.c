#include "main.h"
#include <stdio.h>

/**
 * rev_string -Reverses a string
 * @s: p
 * Return: void
 */
void rev_string(char *s)
{
	int t;
	char e;
	int count = 0;

	for (t = 0 ; s[t] != '\0' ; t++)
		count++;
	for (t = 0 ; t < count / 2 ; t++)
	{
		e = s[t];
		s[t] = s[count - 1 - t];
		s[count - 1 - t] = e;
	}
}
