#include "main.h"

/**
  * print_rev - function that prints a string, in reverse
  *
  * @s: array hold the string that we want to peint
  */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
