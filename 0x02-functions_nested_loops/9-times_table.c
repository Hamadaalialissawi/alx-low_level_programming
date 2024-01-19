#include "main.h"

/**
  * times_table - function to prints the 9 times table
  *
  */
void times_table(void)
{
	int t;
	int u;
	int a;

	for (t = 0; t <= 9; t++)
	{
		for (u = 0; u <= 9; u++)
		{
			a = u * t;
			if (a < 10)
			{
				if (u > 0)
				{
				_putchar (' ');
				}
				_putchar (a + '0');
			}
			else
			{
				_putchar ((a / 10) + '0');
				_putchar ((a % 10) + '0');
			}
			if (u < 9)
			{
			_putchar (',');
			_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}
