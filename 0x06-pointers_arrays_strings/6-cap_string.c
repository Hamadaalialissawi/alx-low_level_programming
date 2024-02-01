#include "main.h"

/**
  * *cap_string - function capitalizes all words of a string
  *
  * @str: pointer point to the array that hold our string
  * Return: pointer pwr
  */
char *cap_string(char *str)
{
	char *pwr = str;
	int i, m;

	m = 0;
	while (str[m] != '\0')
	{
		m++;
	}
	for (i = 0; i < m; i++)
	{
		if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == ',' || str[i] == ';' || str[i] == '.'
			|| str[i] == '!' || str[i] == '?' || str[i] == '"'
			|| str[i] == '(' || str[i] == ')' || str[i] == '{'
			|| str[i] == '}')
			&& str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] = str[i + 1] - 32;
		}
	}
	return (pwr);
}
