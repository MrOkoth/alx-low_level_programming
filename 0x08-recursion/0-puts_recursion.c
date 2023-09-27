#include "main.h"

/**
 * _puts_recursion - function like puuts
 * @s: p
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
