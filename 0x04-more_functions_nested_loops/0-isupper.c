#include "main.h"
#include <stdio.h>

/**
 * _isupper - check for uppercase
 *@c: parameter
 * Return: Always capital
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
