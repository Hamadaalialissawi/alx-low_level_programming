#include "main.h"

/**
  * _strcmp - function compares two strings
  * @s1: the first string
  * @s2: the secound string
  * Return: 0 if s1 = s2 and 15 if s1 > s2 and -15 if s2 > s1
  */
int _strcmp(char *s1, char *s2)
{
	int m, d;

	m = d = 0;
	while (s1[m] != '\0')
	{
		m++;
	}
	while (s2[d] != '\0')
	{
		d++;
	}
	if (m > d)
	{
		return (15);
	}
	else if (d > m)
	{
		return (-15);
	}
	else 
	{
		return (0);
	}

}
