#include <stdio.h>

/**
  * main - print digits
  *
  * prints all possible different combinations of two digits.
  * Return: usually (0);
  */
int main(void)
{
	int a;
	int j;

	for (a = 48; a <= 56; a++)
	{
		for (j = a + 1; j <= 57; j++)
		{
			putchar(a);
			putchar(j);
			if (j != 57 || a != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
