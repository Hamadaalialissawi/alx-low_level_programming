#include "main.h"

/**
  * _strcpy - function to copy an array to another one
  *
  * @dest: the array that we want to copy to
  * @src: points to the array that we want to copy
  * Return: dest
  */
char *_strcpy(char *dest, char *src)
{
	int tml;

	while (src[tml] != '\0')
	{
		dest[tml] = src[tml];
		tml++;
	}
	dest[tml] = '\0';
	return (dest);
}
