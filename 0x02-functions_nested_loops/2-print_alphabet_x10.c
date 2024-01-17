#include "main.h"

/**
  * print_alphabet_x10 - function to print alphabet
  *
  * Return: (void);
  */
void print_alphabet_x10(void)
{
	int i;
	int m;

	i = 0;
	while (i < 10)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		i++;
		_putchar('\n');
	}
}
