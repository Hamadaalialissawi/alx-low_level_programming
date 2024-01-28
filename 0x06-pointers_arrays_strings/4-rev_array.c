#include "main.h"

/**
  * reverse_array - function that reverses the content of an array of integers
  * @a: the string
  * @n: number of elements
  */
void reverse_array(int *a, int n)
{
	int i, k;

	k = n - 1;
	for (i = 0; i < k; i++)
	{
		int l;

		l = a[i];
		a[i] = a[k];
		a[k] = l;
		k--;
	}
}
