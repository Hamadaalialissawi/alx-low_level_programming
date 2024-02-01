#include "main.h"

/**
  * _memcpy - function copies memory area
  * @dest: The array we want to copy to
  * @src: The array we want to copy from
  * @n: numbers of bytes that we want to copy
  * Return: (dest)
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
