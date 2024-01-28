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
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (i = 0; i < dest_len && *src != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\n';
	dest[(dest_len + i) + 1] = '\0';
	return (dest);
}
