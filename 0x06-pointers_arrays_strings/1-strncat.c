#include "main.h"

/**
  * _strncat -  function that concatenates two strings
  *
  * @dest: first string
  * @src: the second string
  * @n: n bytes from src that we will use
  * Return: dest_string
  */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	*dest = '\0';
	return (dest_start);
}
