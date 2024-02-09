#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - function that allocates memory using malloc
  *
  * @b: the size of memory;
  * Return: *s
  */
void *malloc_checked(unsigned int b)
{
	unsigned int *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
