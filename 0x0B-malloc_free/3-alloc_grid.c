#include <stdlib.h>

/**
 * alloc_grid - eturns a pointer to a 2 dimensional 
 * 		array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **vect;
	int i, j;

	if ((width <= 0) && (height <= 0))
		return (NULL);
	vect = malloc(height * sizeof(int *));
	if (vect == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		vect[i] = malloc(width * sizeof(int));
		if (vect[i] == NULL)
		{
			while (i >= 0)
			{
				free(vect[i]);
				i--;
			}
			free(vect);
			return (NULL);
		}
                for (j = 0; j < width; j++)
			vect[i][j] = 0;
	}
	return vect;
}

