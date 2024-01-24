#include "main.h"

/**
  * print_square - function to print square
  *
  * @size: the size of the square
  */
void print_square(int size)
{
	int l, w;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (l = 0; l < size; l++)
	{
		for (w = 0; w < size; w++)
			_putchar('#');
		_putchar('\n');
	}
}
