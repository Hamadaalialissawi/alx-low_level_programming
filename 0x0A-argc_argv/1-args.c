#include <stdio.h>
#include "main.h"

/**
  * main - prints the number of arguments passed into it
  * @argc: the number of the arguments
  * @argv: the pramter that hold
  * Return: usually 0
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
