#include <stdio.h>

/**
  * main - print alphabet
  *
  * this function prints the alphabet
  * depending on its numerical value
  * Return: usually (0)
  */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
