#include "main.h"

/**
  * _memset - function fills memory with a constant byte.
  *
  * @s: pointer point to the array that we want to fill
  * @b: constant byte.
  * @n: array's size
  * Return: ptr
  */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (ptr);
}
