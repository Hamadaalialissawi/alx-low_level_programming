#include "main.h"

/**
  *  print_times_table - function to prints the times table
  *
  * @n: the number of the table
  */
void print_times_table(int n)
{
	int v, d, r;

	if (n > 15 || n < 0)
		_putchar(' ');
	else
	{
		for (v = 0; v <= n; v++)
		{
			for (d = 0; d <= n; d++)
			{
				r = v * d;
				if (r < 10)
					_putchar(r + '0');
				else if (r >= 10 && r <= 99)
				{
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				else
				{
					_putchar(((r / 10) / 10) + '0');
					_putchar(((r / 10) % 10) + '0');
					_putchar((r % 10) + '0');
				}
				if (d != n)
				{
					_putchar(',');
					_putchar(' ');
					if (r < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (r >= 10 && r <= 99)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
