#include "main.h"

/**
  * factorial -  function returns the factorial of a given number.
  *
  * @: number
  * Return: m;
  */
int factorial(int n)
{
	int m = n;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	m = m * factorial(n - 1);
	return (m);
}
