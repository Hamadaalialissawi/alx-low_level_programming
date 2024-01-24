#include "main.h"

/**
  * _isdigit - function that checks for a digit
  *
  * @c: is the number that we want to check
  * Return: (1) if c is digit
  * and (0) else
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
