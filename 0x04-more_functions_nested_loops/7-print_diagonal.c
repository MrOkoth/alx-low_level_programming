#include "main.h"

/**
 * print_diagonal - Draw diagonal lines
 *@n: p
 * Return: void
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0 ; a < n ; a++)
		{
			for (b = 0 ; b < a ; b++)
			{
			putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}		else
		{
			putchar('\n');
		}
}
