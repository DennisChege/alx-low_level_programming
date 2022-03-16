#include "main.h"

/**
 * print_alphabet - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;
	char c;

	for (i = 0; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}


