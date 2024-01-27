#include "main.h"

/**
  * puts_half - function to print the second half of string
  *
  * @str: poiter point to the arrey
  */
void puts_half(char *str)
{
	int len;
	int i;
	int m;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		m = (len - 1) / 2;
		for (i = m + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
