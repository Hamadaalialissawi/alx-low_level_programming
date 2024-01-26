#include "main.h"

/**
  * _puts - function to print text
  *
  * @str: array of the chars that we want to print
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
