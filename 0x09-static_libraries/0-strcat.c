#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: p
 * @src: p
 * Return: dest;
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int t;

	for (t = 0 ; dest[t] != '\0' ; t++)
		destlen++;
	for (t = 0 ; src[t] != '\0' ; t++)
		srclen++;
	for (t = 0 ; t <= srclen ; t++)
		dest[destlen + t] = src[t];
	return (dest);
}
