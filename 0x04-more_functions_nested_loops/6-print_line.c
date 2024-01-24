#include "main.h"

/**
  * print_line - function draws a straight line in the terminal
  *
  * @n: number of the line units
  */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
