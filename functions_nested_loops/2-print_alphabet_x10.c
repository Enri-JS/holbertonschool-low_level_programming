#include "main.h"
/**
 * print_alphabet_X10 - prints the alphabet x10 times
 * Return: void
 */

void print_alphabet_X10(void)
{
	char al;
	int c;
	c = 0;

	while (c < 10)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
	_putchar('\n');
	c++;
	}
}
