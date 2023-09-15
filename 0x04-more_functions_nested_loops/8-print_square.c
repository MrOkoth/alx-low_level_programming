#include "main.h"
#include <stdio.h>

/**
 * print_square -prints square
 * @size: p
 *
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
		putchar('\n');
	else
	{
		int t, e;

		for (t = 1 ; t <= size ; t++)
		{
			for (e = 1 ; e <= size ; e++)
				putchar('#');
			putchar('\n');
		}
	}
}
