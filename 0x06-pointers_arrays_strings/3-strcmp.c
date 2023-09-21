#include "main.h"

/**
 * _strcmp - compares two things
 * @s1: p
 * @s2: p
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int t;

	for (t = 0 ; s1[t] != '\0' || s2[t] != '\0' ; t++)
	{
		if (s1[t] != s2[t])
		{
			if (s1[t] < s2[t])
				return (s1[t] - s2[t]);
			else if (s2[t] < s1[t])
				return (s1[t] - s2[t]);
		}
	}
	return (0);
}
