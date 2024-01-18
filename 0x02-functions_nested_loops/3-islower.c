#include "main.h"

/**
  * _islower - function that checks for lowercase character
  *
  * @c: is the char that we want to check
  * Return: 1 if c is lowercase
  * and  0 otherwise
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
