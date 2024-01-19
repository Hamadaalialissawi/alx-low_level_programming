#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - a function to print numbers
  *
  * prints all natural numbers from n to 98, followed by a new line
  * @n: the number that we will take from the user
  */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
		printf("%d", n);
	printf("\n");
}
