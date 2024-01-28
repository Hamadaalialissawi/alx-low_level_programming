#include "main.h"

/**
  * _strcmp - function compares two strings
  * @s1: the first string
  * @s2: the secound string
  * Return: 0 if s1 = s2 and positive if s1 > s2 and -nigative if s2 > s1
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
