#include "main.h"
#include "stdio.h"

/**
 * print_line - Draws a straight line
 *@n: p
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		int t;

		for (t = 1 ; t <= n ; t++)
			putchar('_');
		putchar('\n');
	}
}
