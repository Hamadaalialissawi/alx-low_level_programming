#include "main.h"

/**
  * _isupper - function that checks for uppercase character
  *
  * @c: is the character that we want to check
  * Return: (1) if the character is uppercase
  * and (0) else
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
