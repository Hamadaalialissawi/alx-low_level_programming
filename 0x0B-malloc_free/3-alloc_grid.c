#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid -  function returns a pointer to a 2
  * dimensional array of integers
  *
  * @width: first number
  * @height: secund number
  * Return: ar
  */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, d, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ar = malloc(height * sizeof(int));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < height; l++)
	{
		ar[l] = malloc(width * sizeof(int));
	}
	if (ar == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			for (d = 0; d < width; d++)
			{
				ar[i][d] = 0;
			}
		}
	}
	return (ar);
}
