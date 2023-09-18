#include "main.h"

/**
 * _strlen -returns length of a string
 * @s: p
 * Return: length
 */

int _strlen(char *s)
{
	int t;
	int count = 0;

	for (t = 0 ; s[t] != '\0' ; t++)
		count++;
	return (count);
}
