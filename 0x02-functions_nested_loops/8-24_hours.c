#include "main.h"

/**
 * jack_bauer -prints minutes
 *
 * Return: Time
 */

void jack_bauer(void)
{
	int t, e;

	for (t = 0 ; t < 24 ; t++)
	{
		for (e = 0 ; e < 60 ; e++)
		{
			_putchar(t / 10 + '0');
			_putchar(t % 10 + '0');
			_putchar(':');
			_putchar(e / 10 + '0');
			_putchar(e % 10 + '0');
			_putchar('\n');
		}
	}
}
