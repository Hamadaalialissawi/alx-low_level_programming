#include <stdio.h>

/**
  * main - prints the lowercase
  *
  * Print the lowercase alphabet in reverse
  * Return: usually (0)
  */
int main(void)
{
	char z;

	for (z = 'z'; z >= 'a'; z--)
		putchar(z);
	putchar('\n');
	return (0);
}
