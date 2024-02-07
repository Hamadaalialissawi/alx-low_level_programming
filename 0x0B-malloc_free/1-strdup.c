#include "main.h"
#include <stdlib.h>

/**
  * _strdup -  function returns a pointer to a newly allocated
  * space in memory contains a copy of the string given as a parameter
  *
  * @str: pointer to the array
  * Return: a pointer to the copy of the array
  */
char *_strdup(char *str)
{
	char *ar;
	int m, i;

	m = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[m] != '\0')
	{
		m++;
	}
	m = m + 1;
	ar = malloc(sizeof(char) * m);
	if (ar == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i <= m)
		{
			ar[i] = str[i];
			i++;
		}
		return (ar);
	}
}
