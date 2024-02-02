#include "main.h"

/**
  * _strstr - function locates a substring
  *
  * @haystack: first array
  * @needle: second array
  * Return: pointer to the beginning of the located substring
  * or NULL if the substring is not found
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (!*needle)
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
		{
			return (&haystack[i]);
		}
	}
	return ('\0');
}
