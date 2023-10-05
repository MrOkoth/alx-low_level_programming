#include "main.h"

/**
 * _calloc - allocates memory
 * @nmemb: p
 * @size: p
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
