#include "main.h"
#include <stdlib.h>

/**
  * create_array - function to creat an array
  *
  * @size: size of array
  * @c: the vlue of the array units
  * Return: null if the size == 0;
  * and pointer to the array if the size is greater than zero
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return ('\0');
	}
	str = malloc(sizeof(char) * size);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
