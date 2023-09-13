#include "main.h"
#include "stdio.h"

/**
 * times_table -Prints timetables
 *
 * Return:
 */

void times_table(void)
{
	int t, e, result;

	for (t = 0 ; t < 10 ; t++)
	{
		for (e = 0 ; e < 10 ; e++)
		{
			result = t * e;
			if (e == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d", result);
				if (e != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
