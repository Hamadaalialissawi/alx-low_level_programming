#include <stdio.h>

/**
  * main - prints digits
  *
  * Prints all possible combinations of single-digit numbers
  * Return: usually (0)
  */
int main(void)
{
	int a;

	a = 48;
	while (a <= 57)
	{
		putchar(a);
		if (a != 57)
		{
		putchar(',');
		putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
