#include "main.h"

/**
  * _strcat -  function concatenates two strings
  *
  * @dest: paramter point to the first string that we want to conctenate
  * @src: the secound string
  * Return: (dest) ; pointer points to the hole string
  */
char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest_start);
}
