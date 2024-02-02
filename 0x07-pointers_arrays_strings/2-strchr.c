#include "main.h"

/**
  * _strchr -  function locates a character in a string
  *
  * @s: pointer to the array
  * @c: the char that we want to search about
  * Return: a pointer to the first occurrence
  * of the character c in the string s
  * or NULL if the character is not found
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
