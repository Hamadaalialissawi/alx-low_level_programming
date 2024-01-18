#include "main.h"

/**
  * _abs - function that prints the sign of a number.
  *
  * @n: is the number that we want computes the absolute value of an integer
  * Return: a
  */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
