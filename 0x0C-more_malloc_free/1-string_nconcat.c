#include "main.h"
#include <stdlib.h>

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
	unsigned int i, d, s1l, s2l;

	s1l = s2l = i = d = 0;
	while (s1[s1l] != '\0')
		s1l++;
	while (s2[s2l] != '\0')
		s2l++;
	if (n >= s2l)
	{
		str = malloc(sizeof(char) * (s1l + s2l - 1));
		if (str == NULL)
			return (NULL);
		for (i = 0; i < s1l; i++)
			str[i] = s1[i];
		for (d = 0; d <= s2l; d++)
			str[i + d] = s2[d];
	}
	else
	{
		 str = malloc(sizeof(char) * (s1l + n));
		if (str == NULL)
		return (NULL);
		for (i = 0; i < s1l; i++)
			str[i] = s1[i];
		for (d = 0; d < n; d++)
			str[i + d] = s2[d];
		 str[i + d] = '\0';
	}
	return (str);
}
