#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * string_nconcat - function concatenates two strings.
  *
  * @s1: first string
  * @s2: sucond string
  * @n: the number of bytes th copy from s1 to s2
  * Return: str
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1l, s2l, l, i, d;

	s1l = 0, s2l = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1l] != '\0')
	{
		s1l++;
	}
	while (s2[s2l] != '\0')
	{
		s2l++;
	}
	if (n >= s2l)
	{
		l = s1l + s2l + 1;
	}
	else
	{
		l = s1l + n + 1;
	}
	str = malloc(sizeof(int) * l);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1l; i++)
	{
		str[i] = s1[i];
	}
	for (d = 0; d < (l - s1l - 1); d++)
	{
		str[i] = s2[d];
		i++;
	}
	str[i] = '\0';
	return (str);
}
