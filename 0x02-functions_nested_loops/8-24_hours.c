#include "main.h"

/**
  * jack_bauer - function to print minuts
  *
  */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			if (h < 10)
			{
				_putchar ('0');
				_putchar (h + '0');
			}
			else
			{
				_putchar ((h / 10) + '0');
				_putchar ((h % 10) + '0');
			}
			_putchar (':');
			if (m < 10)
			{
				_putchar ('0');
				_putchar (m + '0');
			}
			else
			{
				_putchar ((m / 10) + '0');
				_putchar ((m % 10) + '0');
			}
			_putchar ('\n');
		}
	}
}
