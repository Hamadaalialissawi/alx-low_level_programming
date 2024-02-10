#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _calloc -  function allocates memory for an array, using malloc
  *
  * @nmemb: number of elements
  * @size: size of elements
  * Return: arr;
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(size) * nmemb);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
