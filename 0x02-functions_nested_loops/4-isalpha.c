#include "main.h"

/**
  * _isalpha - function that checks for alphabetic character
  *
  * @c: is the char that we want to check
  * Return: 1 if c is lowercase
  * and  0 otherwise
  */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
