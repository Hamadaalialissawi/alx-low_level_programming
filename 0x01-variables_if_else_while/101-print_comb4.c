#include <stdio.h>

/**
  * main - prints digits
  *
  * prints all possible different combinations of three digits.
  * Return: usually (0)
  */
int main(void)
{
	int a, b, c;

	for (a = 48; a <= 55; a++)
	{
		for (b = a + 1; b <= 56; b++)
		{
			for (c = b + 1 ; c <= 57; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 55 || b != 56 || c != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

