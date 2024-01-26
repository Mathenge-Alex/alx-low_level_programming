#include <stdlib.h>

/**
 * **alloc_grid - Functions returns a pointer to a 2D array of ints.
 * @width: integer
 * @height: integer
 * Return: Returns a 2D array
 */

int **alloc_grid(int width, int height)
{
int **sect, i, j;
sect = malloc(sizeof(*sect) * height);

if (width <= 0 || height <= 0 || sect == 0)
	return (NULL);

else
{
	for (i = 0; i < height; i++)
	{
		sect[i] = malloc(sizeof(**sect) * width);
		if (sect[i] == 0)
		{
			while (i--)  /*Free everything in case malloc fails*/
				free(sect[i]);
			free(sect);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			sect[i][j] = 0;
	}
}

return (sect);
}
