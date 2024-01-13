#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - function to print tow multiplicated numbers
  *
  * @argc: the count of the arguments
  * @argv: an arry of strings that hold the argument value
  * Return: in success (0)
  * in falide it returns (1)
  */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
