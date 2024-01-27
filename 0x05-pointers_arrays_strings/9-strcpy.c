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
	int tml, i;

	while (src[tml] != '\0')
	{
		tml++;
	}
	for (i = 0; i < tml; i++)
	{
		dest[i] = src[i];
	}
	dest[tml] = '\0';
	return (dest);
}
