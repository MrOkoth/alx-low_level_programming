#include "main.h"

/**
 * _islower -checks for lower case
 * @c: parameter to be checked
 * Return: always 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
