#include "main.h"

/**
  * swap_int - function that swaps the values of two integers
  *
  * @a: the first number
  * @b: the secund number
  */
void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
