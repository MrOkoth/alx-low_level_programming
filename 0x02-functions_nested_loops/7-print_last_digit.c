#include "main.h"

/**
 * print_last_digit -Print last digit of a number
 * @t: parameter
 * Return: u
 */

int print_last_digit(int t)
{
	int u;

	u = t % 10;
	if (t < 0)
		u = -u;
	_putchar(u + '0');
	return (u);
}
