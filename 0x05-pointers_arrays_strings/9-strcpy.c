#include "main.h"

/**
  * _strcpy - function to copy an array to another one
  *
  * @dest: the array that we want to copy to
  * @src: points to the array that we want to copy
  * Return: str
  */
char *_strcpy(char *dest, char *src)
{
	char *str = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (str);
}
