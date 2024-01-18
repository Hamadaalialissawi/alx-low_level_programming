#include "main.h"
#include <limits.h>
/**
  * print_last_digit - function prints the last digit of a number
  *
  * @n: the that we want to print it's last digit
  * Return: int n
  */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	 n = n % 10;
	_putchar('0' + n);
	return (n);
}
