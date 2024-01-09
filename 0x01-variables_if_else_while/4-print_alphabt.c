#include <stdio.h>

/**
  * main - print the alphabet
  *
  * print alphabet except q and e
  * Return: usually (0)
  */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		if (a != 'q' && a != 'e')
			putchar (a);
	putchar ('\n');
	return (0);
}

