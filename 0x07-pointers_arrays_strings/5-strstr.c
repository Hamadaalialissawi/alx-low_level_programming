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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j] && haystack[i + 1] == needle[j + 1])
				return (&haystack[i]);
		}
	}
	return ('\0');
}
