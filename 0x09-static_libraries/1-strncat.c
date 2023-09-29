#include "main.h"

/**
 * _strncat - concatonates
 * @dest: p
 * @src: p
 * @n: p
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int t;

	for (t = 0 ; t < n && *src != '\0' ; t++)
	{
		dest[len + t] = *src;
		src++;
	}
	dest[len + t] = '\0';
	return (dest);
}
