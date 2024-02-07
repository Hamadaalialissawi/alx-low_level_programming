#include "main.h"
#include <stdlib.h>


char *str_concat(char *s1, char *s2)
{
	char *ar;
	int m1, m2, i, d;

	if (s1 == NULL)
	{
		s1 =malloc(sizeof(char) * 1);
	}
	if (s2 == NULL)
	{
		s2 =malloc(sizeof(char) * 1);
	}
	else
	{
		m1 = 0;
		while (s1[m1] != '\0')
		{
			m1++;
		}
		m2 = 0;
		while (s2[m2] != '\0')
		{
			m2++;
		}
		ar =malloc(sizeof(char) * (m1 + m2 + 1));
		if (ar == NULL)
		{
			return (NULL);
		}
		else
		{
			i = 0;
			while (i <= m1)
			{
				ar[i] = s1[i];
				i++;
			}
			d = 0;
			while (d <= m2)
			{
				ar[m1 + d + 1] = s2[d];
				d++;
			}
			ar[m1 + m2 + 1] = '\0';
		}
	}	
	return (ar);
}
