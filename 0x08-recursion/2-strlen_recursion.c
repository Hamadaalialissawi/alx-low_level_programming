#include "main.h"

/**
  * _strlen_recursion - funcution returns the length of string
  *
  * @s: string
  * Return: m = the leng
  */
int _strlen_recursion(char *s)
{
	int m = 1;

	if (*s == '\0')
		return (0);
	m += _strlen_recursion(s + 1);
	return (m);
}
