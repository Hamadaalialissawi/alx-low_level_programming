#include <stdio.h>

/**
  * print_array - function prints the n elements in the array
  *
  * @a: pramter points to an array
  * @n: the number of the elements that we want to print
  */
void print_array(int *a, int n)
{
	int i;
	int m;

	m = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (m != n - 1)
		{
			printf(", ");
		}
		m++;
	}
	putchar('\n');
}
