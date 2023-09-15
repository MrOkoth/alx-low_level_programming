#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Draw diagonal lines
 *@n: p
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		int t, e;

		for (t = 0 ; t < n ; t++)
		{
			for (e = 0 ; e <= t ; e++)
				putchar(' ');
			putchar('\\');
			putchar('\n');
		}
	}
}
