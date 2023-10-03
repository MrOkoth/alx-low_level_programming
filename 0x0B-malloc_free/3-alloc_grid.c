#include "main.h"

/**
 * alloc_grid - 2 dimension
 * @width: p
 * @height: p
 * Return: NULL
 */

int **alloc_grid(int width, int height)
{
	int t, e;
	int **output;

	if (width <= 0 || height <= 0)
		return (NULL);

	output = malloc(sizeof(int *) * height);

	if (output == NULL)
		return (NULL);

	for (t = 0; t < height; t++)
	{
		output[t] = malloc(sizeof(int) * width);

		if (output[t] == NULL)
		{
			free(output);
			for (e = 0; e <= height; e++)
				free(output[e]);
			return (NULL);
		}
		for (e = 0; e < width; e++)
			output[t][e] = 0;
	}
	return (output);
}
