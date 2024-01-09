#include <stdio.h>

/**
  * main - prints numbers
  *
  * Print all the numbers of
  * base 16
  * Return: usually (0)
  */
int main(void)
{
	int a;
	int c;

	for (a = 48; a <= 57; a++)
		putchar(a);
	for (c = 97; c <= 102; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
