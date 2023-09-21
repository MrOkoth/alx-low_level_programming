#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: p
 * @n: p
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int t;
	int e;

	for (t = 0 ; t < n--; t++)
	{
		e = a[t];
		a[t] = a[n];
		a[n] = e;
	}
}
