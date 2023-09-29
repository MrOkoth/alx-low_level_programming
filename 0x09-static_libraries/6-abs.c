#include "main.h"

/**
 * _abs -computes integer
 * @t: function parameter
 * Return: -a or a
 */

int _abs(int t)
{
	if (t < 0)
		return (-t);
	else if (t >= 0)
	{
		return (t);
	}

	return (0);
}
