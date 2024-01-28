#include "main.h"

/**
  * _strncpy - function copies a string
  * @dest: pointer point to the new string
  * @src: pointer point to the string that we want to copy
  * @n: the number of bytes in src that will be cop
  * Return: @dess: pointer point to the new string
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *dess = dest;

	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	*dest = '\0';
	return (dess);
}
