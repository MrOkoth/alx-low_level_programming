#include "main.h"

/**
 * *_strchr - Functions that locate a string
 * @s: p
 * @c: p
 * Return: c
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0 ; s[index] >= '\0' ; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
