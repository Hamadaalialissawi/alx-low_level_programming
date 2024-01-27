#include "main.h"

/**
  * rev_string - function to reverses a string
  *
  * @s: array of characters that we want to reverses
  */
void rev_string(char *s)
{
	int len;
	int i;
	char m;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		m = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = m;
	}
}
