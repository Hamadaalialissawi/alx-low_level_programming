#include "main.h"

/**
  * print_alphabet - function that prints the alphabet
  *
  * prints the alphabet, in lowercase, followed by a new line
  * Return: (0)
  */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

/**
  * main - the main function that call print_alphabet
  *
  * Return: usually (0)
  */
int main(void)
{
	print_alphabet();
	return (0);
}
