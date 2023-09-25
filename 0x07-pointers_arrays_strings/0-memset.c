#include "main.h"

/**
 * *_memset - fills memory
 * @s: p
 * @b: p
 * @n: p
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
		for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}
