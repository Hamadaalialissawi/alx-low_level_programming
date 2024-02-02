#include "main.h"

/**
  * _strspn - function gets the length of a prefix substring
  *
  * @s: first array
  * @accept: secound array
  * Return: m
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, m;

	m = 0;
	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				m++;
			}
		}
	}
	return (m);
}
