#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: p
 * @src: p
 * @n: p
 * Return: Dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int t;

	for (t = 0 ; t < n && src[t] != '\0' ; t++)
		dest[t] = src[t];
	while (t < n)
	{
		dest[t] = '\0';
		t++;
	}
	return (dest);
}
