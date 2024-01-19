#include <stdio.h>

/**
  * main - function to print number
  *
  * computes and prints the sum of all the multiples of 3 or 5 below 1024
  * Return: usually (0);
  */
int main(void)
{
	int a, b, c, d;

	b = 0;
	d = 0;
	for (a = 3; a < 1024; a = a + 3)
	{
		b = b + a;
	}
	for (c = 5; c < 1024; c = c + 5)
	{
		d = d + c;
	}
	printf("%i\n", d + b);
	return (0);
}
