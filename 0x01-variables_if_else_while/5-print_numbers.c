#include <stdio.h>

/**
  * main - print digit
  *
  * Print all single digit numbers of base 10.
  * Return: usually (0).
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
